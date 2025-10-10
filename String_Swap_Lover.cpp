#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 200010;
struct Node {
    ll sumv = 0;
    ll sump = 0;
    int lazy = 0;
};
Node tree[4*MAXN];
int N;
string S;

void build(int node, int start, int end) {
    if(start == end) {
        int val = S[start-1] - '0';
        tree[node].sumv = val;
        tree[node].sump = (ll)val * start;
        return;
    }
    int mid = (start + end) / 2;
    build(2*node, start, mid);
    build(2*node+1, mid+1, end);
    tree[node].sumv = tree[2*node].sumv + tree[2*node+1].sumv;
    tree[node].sump = tree[2*node].sump + tree[2*node+1].sump;
}

void push(int node, int start, int end) {
    if(start == end) return;
    int mid = (start + end) / 2;
    int left = 2*node, right = 2*node+1;
    tree[left].lazy ^= tree[node].lazy;
    tree[right].lazy ^= tree[node].lazy;
    if(tree[node].lazy) {
        ll len1 = mid - start + 1;
        ll sumi1 = (ll)(start + mid) * len1 / 2;
        tree[left].sumv = len1 - tree[left].sumv;
        tree[left].sump = sumi1 - tree[left].sump;
        ll len2 = end - mid;
        ll sumi2 = (ll)(mid+1 + end) * len2 / 2;
        tree[right].sumv = len2 - tree[right].sumv;
        tree[right].sump = sumi2 - tree[right].sump;
    }
    tree[node].lazy = 0;
}

void update(int ql, int qr, int node, int start, int end) {
    if(ql > end || qr < start) return;
    if(ql <= start && end <= qr) {
        tree[node].lazy ^= 1;
        ll len = end - start + 1;
        ll sumi = (ll)(start + end) * len / 2;
        tree[node].sumv = len - tree[node].sumv;
        tree[node].sump = sumi - tree[node].sump;
        return;
    }
    if(start != end) push(node, start, end);
    int mid = (start + end) / 2;
    update(ql, qr, 2*node, start, mid);
    update(ql, qr, 2*node+1, mid+1, end);
    tree[node].sumv = tree[2*node].sumv + tree[2*node+1].sumv;
    tree[node].sump = tree[2*node].sump + tree[2*node+1].sump;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N;
    cin >> S;
    build(1,1,N);
    int Q;
    cin >> Q;
    for(int qi=0; qi<Q; qi++) {
        int l,r;
        cin >> l >> r;
        update(l,r,1,1,N);
        ll k = tree[1].sumv;
        ll sp = tree[1].sump;
        ll ans = sp - k * (k + 1) / 2;
        cout << ans << '\n';
    }
    return 0;
}