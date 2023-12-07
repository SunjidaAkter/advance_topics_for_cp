#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int q;cin>>q;
    map<ll,ll>mp;
    map<ll,bool>vis;
    while(q--){
        char c;cin>>c;
        ll k;cin>>k;
        if(c=='+'){
            vis[k]=true;
        }else{
            ll x=mp[k]+k;
            while(vis[x]){
                mp[k]=x;
                x+=k;
            }
            cout<<x<<endl;
        }
    }
    return 0;
}