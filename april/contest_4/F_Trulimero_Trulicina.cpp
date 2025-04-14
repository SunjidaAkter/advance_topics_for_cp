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
    ll n,m,k,w;cin>>n>>m>>k; w=0;
		for(ll i=1;i<=n;i++){
			for(ll j=1;j<=m;j++,w=(w+1)%k)cout<<w+1<<' ';
			if(!(m%k))w=(w+1)%k;cout<<nl;
		}
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
