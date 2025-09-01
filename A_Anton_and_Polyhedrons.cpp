#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    int count=0;
    for(int t=1;t<=tc;t++){
        string s;
        cin>>s;
        if(s=="Tetrahedron"){
            count+=4;
        }
        else if(s=="Cube"){
            count+=6;
        }
        else if(s=="Octahedron"){
            count+=8;
        }
        else if(s=="Dodecahedron"){
            count+=12;
        }
        else if(s=="Icosahedron"){
            count+=20;
        }
    }
    cout<<count<<endl;
    return 0;
}