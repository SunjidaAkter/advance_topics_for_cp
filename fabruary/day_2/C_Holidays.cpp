#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll n,m;cin>>n>>m;
    ll x,y,s1=0,s2=0;cin>>x>>y;
    if(x!=1){
        cout<<1<<" "<<0<<nl;
        return;
    }
    for(ll i=1;i<m;i++){
        ll a,b;cin>>a>>b;
        // cout<<a<<" "<<y<<nl;
        if(a-y==1){
            x=a;y=b;
            continue;
        }
        else{
            if(a!=y){
                cout<<y+1<<" "<<0<<nl;
                return;
            }else{
                s1++;
                ll z=y;
                while(a==z){
                    if(i<m){
                        s1++;
                        x=a,y=b;
                        cin>>a>>b;
                        i++;                      
                    }else break; 
                }
                cout<<x<<" "<<s1<<nl;
                return;
            }
        }
    }
    if(y!=n){
        cout<<y+1<<" "<<0<<nl;
        return;
    }
        cout<<"OK"<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}