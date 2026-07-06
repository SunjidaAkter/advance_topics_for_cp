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
    string s;cin>>s;
    ll n=s.size();
    ll ans=0;
    vector<ll>counter;
    for(ll i=0;i<n;i++){
        if(s[i]=='o'||s[i]=='?'){
            counter.push_back(i);
        }
    }
    for(ll i=0;i<=9999;i++){
        vector<ll>temp;
        ll x=i;
        for(ll j=0;j<4;j++){
            temp.push_back(x%10);
            x/=10;
        }
        map<ll,ll>mp;
        bool flag=true;
        for(ll j=0;j<4;j++){
            mp[temp[j]]++;
            auto idx=find(all(counter),temp[j]);
            if(idx==counter.end()){
                flag=false;
                break;
            }
        }
        for(ll j=0;j<n;j++){
            if(s[j]=='o' && mp[j]==0){
                flag=false;
                break;
            }
        }
        if(flag){
            ans++;
        }
    }
    cout<<ans<<nl;
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