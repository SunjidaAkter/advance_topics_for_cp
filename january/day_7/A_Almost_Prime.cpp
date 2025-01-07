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
vector<int> getprimefac(int n){
    vector<int> ans;
    int nn = n;
    for (int i = 2; i * i <= n; i++){
        if (nn % i == 0){
            ans.push_back(i);
            while (nn % i == 0){
                nn /= i;
            }
        }
    }
    if (nn > 1){
        ans.push_back(nn);
    }
    return ans;
}
void solve(){
    ll n,sum=0;cin>>n;
    for(int i=1;i<=n;i++){
        vector<int> ans=getprimefac(i);
        if(ans.size()==2)sum++;
    }
    cout<<sum<<nl;
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