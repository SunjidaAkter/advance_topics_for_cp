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
    int n;cin>>n;
    int a[n],j=0;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    vector<int>ans(n);
    for(int i=1;i<n;i+=2){
        ans[i]=a[j];
        j++;
    }
    for(int i=0;i<n;i+=2){
        ans[i]=a[j];
        j++;
    }
    cout<<(n-1)/2<<nl;
    for(int val:ans)cout<<val<<" ";
    cout<<nl;
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