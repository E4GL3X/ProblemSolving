#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
                count++;
        }
        int ix;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                ix=i;
                break;
            }

        }
        int ck=0;
        for(int i=ix;i<s.length();i++){
            if(s[i]=='1')
                ck++;
            else
                break;
        }
        if(ck==count && count>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	return 0;
}