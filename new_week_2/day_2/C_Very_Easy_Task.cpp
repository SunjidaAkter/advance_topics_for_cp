// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long ull;
// int n,x,y;
// bool isgood(int t) {
	
// 	return (t/x)+(t/y) >= n-1;

// }

// int main() {
	
// 	cin >> n >> x >> y;
// 	if(n == 1)
// 		cout << min(x,y);
// 	else {
// 		int l =0, r = 1000000000;
// 		while(r > l + 1) {
// 			int m = (l + r) / 2;
// 			if(isgood(m))
// 				r = m;
// 			else
// 				l = m;
// 		}
	
// 		cout << r+min(x,y) << "\n";
// 	}
// 	return 0;
// }
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
ll n,x,y;
bool good(ll k){
	return ((k/x)+(k/y))>=n-1;
}
void solve(){
	cin>>n>>x>>y;
	if(n==1){
		cout<<min(x,y)<<nl;
		return;
	}
	ll l=0,r=1000000000;
	while(r>l+1){
		ll m=(l+r)/2;
		if(good(m))r=m;
		else l=m;
	}
	cout<<r+min(x,y)<<nl;
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