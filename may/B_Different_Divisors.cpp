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
vector<ll> sieve(ll n){
    ll *a = new ll[n + 1]();
    vector<ll> vect;
    for (ll i = 2; i <= n; i++){
        if (a[i] == 0){
            vect.push_back(i);
            for (ll j = i * i; j <= n; j += i){
                a[j] = 1;
            }
        }
    }
    return vect;
}
void solve(){
    
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    vector<ll>ans=sieve(100000);
    while(t--){
        ll n;cin>>n;
        ll cnt=1,j=-1;
        for(ll i=0;i<ans.size();i++){
            if(ans[i]-1>=n){
                j=ans[i];
                cnt*=j;
                break;
            }
        }
        for(ll i=0;i<ans.size();i++){
            if(ans[i]-j>=n){
                // j=ans[i];
                cnt*=ans[i];
                break;
            }
        }
        // solve();
        cout<<cnt<<nl;
    }
    return 0;
}