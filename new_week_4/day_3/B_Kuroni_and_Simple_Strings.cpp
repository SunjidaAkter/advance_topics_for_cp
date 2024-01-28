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
    ll i=0,j=s.size()-1,ans=0;
    vector<ll>v;
    while(i<j){
        // cout<<i<<" "<<j;
        if(s[i]=='('&&s[j]!=')'){
            j--;
        }else if(s[i]=='('&&s[j]==')'){
            ans=1;
            v.push_back(i+1);
            v.push_back(j+1);
            i++,j--;
        }else i++;
    }
    if(ans==0)cout<<0<<nl;
    else{
        cout<<ans<<nl;
        cout<<v.size()<<nl;
        sort(all(v));
        for(ll val:v)cout<<val<<" ";
        cout<<nl;
    }
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