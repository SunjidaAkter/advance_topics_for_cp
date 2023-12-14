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
	ll n,k,d;cin>>n>>k>>d;
	ll a[n];for(ll i=0;i<n;i++)cin>>a[i];
	ll mn=LONG_MAX;
	set<ll>st;
	for(ll i=0;i<=n-d;i++){
		for(ll j=0;j<d;j++)st.insert(a[i+j]);
		ll x=st.size();
		mn=min(mn,x);
		st.clear();
	}
	cout<<mn<<nl;
}
int main(){
	FAST;
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define all(X) (X).begin(), (X).end()
// #define pub push_back
// #define pob pop_back
// #define nl  '\n'
// #define c(x) cout<<x<<nl
// #define yes cout<<"YES"<<nl
// #define no cout<<"NO"<<nl
// #define Yes cout<<"Yes"<<nl
// #define No cout<<"No"<<nl
// typedef pair<int,int>pii;
// #define forl(ty,var,str,end) for(ty var=str; var<end; var++)
// # define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
// void solve(){
//     int n , k , d ;
// 	cin>>n>>k>>d ;
// 	vector<int> v(n) ;
// 	for(int i=0;i<n;i++ ) {
// 		cin>>v[i] ;
// 	}
	
// 	map<int, int> m_map ;
// 	int mn = 0 , cnt= 0;
// 	for(int i = 0 ; i < d ; i++ ){
// 		if(m_map[v[i]] == 0 ){
// 			cnt ++;
// 		}
// 		m_map[v[i]] ++ ;
// 	}
// 	mn = cnt ;
// 	for(int i = d ; i < n ; i ++){
// 		m_map[v[i-d]] --;
// 		if(m_map[v[i-d]] == 0 ) cnt --;
// 		if(m_map[v[i]] == 0 ) cnt ++;
// 		m_map[ v[i] ] ++;
// 		mn = min(mn, cnt ) ;
// 	}
// 	cout<<mn<<nl ;
// }
// int main(){
//     FAST;
//     int t;cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }