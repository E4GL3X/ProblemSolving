#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> g(n+1), rg(n+1);
        for(int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            rg[v].push_back(u);
        }
        vector<bool> vis(n+1, false);
        stack<int> order_st;
        for(int start = 1; start <= n; start++) {
            if(vis[start]) continue;
            stack<pair<int, int>> stk;
            stk.push({start, 0});
            vis[start] = true;
            while(!stk.empty()) {
                pair<int, int> &p = stk.top();
                int u = p.first;
                int &idx = p.second;
                if(idx == (int)g[u].size()) {
                    order_st.push(u);
                    stk.pop();
                    continue;
                }
                int v = g[u][idx];
                p.second++;
                if(!vis[v]) {
                    vis[v] = true;
                    stk.push({v, 0});
                }
            }
        }
        vector<int> comp(n+1, -1);
        vector<int> pointer(n+1, 0);
        int cid = 0;
        vector<int> sz;
        while(!order_st.empty()) {
            int start = order_st.top();
            order_st.pop();
            if(comp[start] != -1) continue;
            sz.push_back(0);
            stack<int> stk;
            stk.push(start);
            comp[start] = cid;
            sz[cid]++;
            while(!stk.empty()) {
                int u = stk.top();
                bool pushed = false;
                while(pointer[u] < (int)rg[u].size()) {
                    int v = rg[u][pointer[u]];
                    pointer[u]++;
                    if(comp[v] == -1) {
                        comp[v] = cid;
                        sz[cid]++;
                        stk.push(v);
                        pushed = true;
                        break;
                    }
                }
                if(!pushed) {
                    stk.pop();
                }
            }
            cid++;
        }
        vector<vector<int>> dag(cid);
        for(int u = 1; u <= n; u++) {
            for(int v : g[u]) {
                int a = comp[u];
                int b = comp[v];
                if(a != b) {
                    dag[a].push_back(b);
                }
            }
        }
        for(int i = 0; i < cid; i++) {
            sort(dag[i].begin(), dag[i].end());
            auto it = unique(dag[i].begin(), dag[i].end());
            dag[i].resize(it - dag[i].begin());
        }
        vector<int> indeg(cid, 0);
        for(int i = 0; i < cid; i++) {
            for(int j : dag[i]) {
                indeg[j]++;
            }
        }
        queue<int> q;
        for(int i = 0; i < cid; i++) {
            if(indeg[i] == 0) q.push(i);
        }
        vector<int> topo;
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            topo.push_back(u);
            for(int v : dag[u]) {
                indeg[v]--;
                if(indeg[v] == 0) q.push(v);
            }
        }
        const long long INF = LLONG_MIN / 2;
        vector<vector<long long>> dp(cid, vector<long long>(k + 1, INF));
        for(int i = 0; i < cid; i++) {
            dp[i][1] = sz[i];
        }
        for(int idx = 0; idx < (int)topo.size(); idx++) {
            int u = topo[idx];
            for(int j = 1; j < k; j++) {
                if(dp[u][j] == INF) continue;
                for(int v : dag[u]) {
                    dp[v][j + 1] = max(dp[v][j + 1], dp[u][j] + sz[v]);
                }
            }
        }
        long long ans = 0;
        for(int i = 0; i < cid; i++) {
            for(int j = 1; j <= k; j++) {
                if(dp[i][j] != INF) {
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}