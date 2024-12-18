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
bool compare(string a, string b){
    return a.size() < b.size();
}
void solve(){
    ll n;cin>>n;
    vector<string>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end(),compare);
    map<pii,ll>mp;
    ll ans=n;
    for(auto s:a){
        n=s.size();
        for(ll m=1;m<=n;m++){
            if((m+n)%2!=0)continue;
            ll mid=(m+n)/2;
            ll req=0;
            for(ll i=0;i<mid;i++)req+=(s[i]-'0');
            for(ll i=mid;i<n;i++)req-=(s[i]-'0');
            if(req>=0)ans+=mp[{m,req}];
        }
        reverse(s.begin(),s.end());
        for(ll m=1;m<=n;m++){
            if((m+n)%2!=0)continue;
            ll mid=(m+n)/2;
            ll req=0;
            for(ll i=0;i<mid;i++)req+=(s[i]-'0');
            for(ll i=mid;i<n;i++)req-=(s[i]-'0');
            if(req>=0)ans+=mp[{m,req}];
        }
        ll sum=0;
        for(ll i=0;i<n;i++)sum+=(s[i]-'0');
        mp[{n,sum}]++;
    }
    cout<<ans<<endl;
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