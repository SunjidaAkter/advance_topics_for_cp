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
    string s;cin>>s;
    vector<ll>v;
    ll cnt=0,j=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='.')cnt++;
        else{
            j=i;
            break;
        }
    }
    ll sum=0;

    if(cnt>m)sum+=(cnt-m);
    if(cnt==n){cout<<n<<nl;return;}
    cnt=0;
    for(ll i=j;i<n;i++){
        if(s[i]=='.')cnt++;
        else{
            v.push_back(cnt);
            cnt=0;
        }
    }
    if(s[n-1]=='.'){
        if(cnt>m)sum+=(cnt-m);
        // cout<<"chk"<<nl;
    }
    for(ll i=0;i<(ll)v.size();i++){
        if(v[i]>2*m)sum+=(v[i]-2*m);
    }
    cout<<sum<<nl;
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