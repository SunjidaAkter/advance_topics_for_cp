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
typedef pair<int,int>pii;
void solve(){
    int n;cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i*(2*i-1);
    }
    cout<<ans<<" "<<2*n<<nl;
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=2;j++){
            cout<<j<<" "<<i+1<<" ";
            for(int k=0;k<n;k++)cout<<k+1<<" ";
            cout<<nl;

        }
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