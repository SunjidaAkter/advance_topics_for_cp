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
	ll n;cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)cin>>a[i];
	ll d=0,k=LONG_MAX;
	for(ll j=0,i=0;i<n;i++){
		d=__gcd(d,a[i]);
		if(d==1){
			ll x=0;
			for(j=i;x!=1;j--){
				d=exchange(x,__gcd(x,a[j]));
			}
			k=min(k,j-i);
			i+=2;
		}
	}
	cout<<abs(k)<<nl;
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