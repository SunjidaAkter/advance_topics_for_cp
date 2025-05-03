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
bool isPowerofTwo(int n) {
    if (n <= 0)
        return false;
    
    // Calculate log base 2 of n
    int logValue = log2(n);
    
    // Check if log2(n) is an integer
    // and 2^(logn) = n
    return pow(2, logValue) == n;
}
void solve(){
    ll n;cin>>n;
    if(n!=1&&isPowerofTwo(n))yes;
    else no;
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