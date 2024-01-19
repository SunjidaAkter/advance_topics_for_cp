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
    string s[n];
    for(ll i=0;i<n;i++)cin>>s[i];
    for(ll i=0;i<m;i++){
        ll floor=n-1;
        while(floor>=0&&s[floor][i]!='.'){
            if(s[floor][i]=='o'){
                floor--;
                break;
            }
            floor--;
        }
        if(floor<0)continue;
        ll cur=floor;
        while(cur>=0){
            if(s[cur][i]=='*'){
                swap(s[floor][i],s[cur][i]);
                floor--;
            }else if(s[cur][i]=='o'){
                floor=cur-1;
            }
            cur--;
        }
    }
    for(ll i=0;i<n;i++){
        cout<<s[i]<<nl;
    }
    cout<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}