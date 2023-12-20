#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n,mn=INT_MAX;cin>>n;
    string s;cin>>s;
    for(ll i=0;i<n;i++){
        vector<ll>fr(3,0);
        fr[s[i]-'a']++;
        for(ll j=i+1;j<min(n,i+7);j++){
            fr[s[j]-'a']++;
            if(fr[0]>fr[1]&&fr[0]>fr[2])mn=min(mn,j-i+1);
        }
    }
    if(mn==INT_MAX)cout<<-1<<nl;
    else cout<<mn<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}