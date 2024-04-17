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
    // int a[n+1][n+1];
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         a[i][j] =0;
    //     }
    // }
    // vector<pii>v;
    // for(int i=0; i<2*n; i++){
    //     v.push_back({1,i});
    //     v.push_back({2,i});
    // }
    // reverse(all(v));
    // for(int i=0; i<v.size(); i++){
    //     if(v[i].first == 1){
    //         for(int j=1; j<=n; j++){
    //             // cout<<v[i].first<<" "<<j;
    //             a[v[i].second][j]=j;
    //         }
    //     }else{
    //         for(int j=1; j<=n; j++){
    //             a[j][v[i].second]=j;
    //         }
    //     }
    // }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i*(2*i-1);
    }
    // for(ll i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
    cout<<ans<<" "<<2*n<<nl;
    for(int i=n-1;i>=0;i--){
        for(int j=1;j<=2;j++){
            cout<<j<<" "<<i+1<<" ";
            for(int k=0;k<n;k++)cout<<k+1<<" ";
            cout<<nl;

        }
        // cout<<v[i].first<<" "<<v[i].second-1<<" ";
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