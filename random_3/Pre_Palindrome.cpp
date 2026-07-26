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
bool is_pal(string s){
    ll i=0,j=s.size()-1;
    ll n=s.size()/2;
    ll cnt=0;
    // cout<<n<<" ";
    while (i<j){
        if(s[i]==s[j])cnt++;
        i++,j--;
    }
    return cnt>=n-1;
}
void solve(){
    string s;cin>>s;
    ll n=s.size();
    if(n==1){cout<<n<<nl;return;}
    if(n==2){cout<<3<<nl;return;}
    if(n==3){cout<<6<<nl;return;}
    ll sum=3*n-3;
    for(ll i=0;i<n-3;i++){
        for(ll j=4;j<=n-i;j++){
            string ans=s.substr(i,j);
            // cout<<ans<<" ";
            if(is_pal(ans))sum++;
        }
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