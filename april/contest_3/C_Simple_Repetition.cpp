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
bool prime(int x) {
    if (x<=1)return false;
    if (x<=3)return true;
    if (x%2==0||x%3==0)return false;
    for (int i=5;i*i<=x;i+=6) {
        if (x%i==0||x%(i + 2)==0)return false;
    }
    return true;
}
void solve(){
    ll n,k;cin>>n>>k;
    if(k==1){
        if(prime(n))yes;
        else no;
        return;
    }
    if(k==2&&n==1)yes;
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

