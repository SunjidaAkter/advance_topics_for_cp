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
    int n;cin>>n;
    vector<int>a(2*n);
    for(int i=0;i<2*n;i++)cin>>a[i];
    int even=0,odd=0;
    for(int i=0;i<2*n;i++){
        if(a[i]%2==0)even++;
        else odd++;
    }
    if(even==n&&odd==n)cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
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