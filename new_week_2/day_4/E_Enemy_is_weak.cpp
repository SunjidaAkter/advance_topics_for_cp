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
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using ordered_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_set2 = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(){
    ll n;cin>>n;
    ll a[n],ans=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    ordered_set1<ll>st1;
    ordered_set2<ll>st2;
    for(ll i=0;i<n;i++)st1.insert(a[i]);
    for(ll i=0;i<n;i++){
        st1.erase(a[i]);
        // cout<<st1.order_of_key(a[i])<<"nl";
        // cout<<st2.order_of_key(a[i])<<"ll";
        ans+=(1LL*st1.order_of_key(a[i])*st2.order_of_key(a[i]));
        st2.insert(a[i]);
    }
    cout<<ans;
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