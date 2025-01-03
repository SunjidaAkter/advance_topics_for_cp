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
    ll n,m;
    cin>>n>>m;
    string s;cin>>s;
    vector<ll>pref(n+2);
    s="#"+s;
    // cout<<s<<nl;
    for(ll i=1;i<=n;i++){
        pref[i]=pref[i-1]+(s[i]-'0');
    }
    vector<ll>prev0(n+2),prev1(n+2);
    vector<ll>next0(n+2),next1(n+2);
    ll zero=-1,one=-1;
    for(ll i=1;i<=n;i++){
        prev0[i]=zero;
        prev1[i]=one;
        if(s[i]=='0')zero=i;
        else one=i;
    }
    zero=-1,one=-1;
    for(ll i=n;i>=1;i--){
        next0[i]=zero;
        next1[i]=one;
        if(s[i]=='0')zero=i;
        else one=i;
    }
    auto is_ok=[&](ll l,ll r)->bool{
        ll ones=pref[r]-pref[l-1];
        if(ones==0 || ones== r-l+1)return true;
        if(pref[r]-pref[r-ones]==ones)return true;
        return false;
    };
    set<pii>st;
    for(ll i=0;i<m;i++){
        ll l,r;
        cin>>l>>r;
        if(is_ok(l,r))st.insert({-1,-1});
        else{
            ll left,right;
            if(prev1[l]==-1)left=1;
            else left=prev1[l]+1;
            if(next0[r]==-1)right=n;
            else right=next0[r]-1;
            st.insert({left,right});
            // cout<<left<<" "<<right<<endl;
        }
    }
        cout<<st.size()<<endl;
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