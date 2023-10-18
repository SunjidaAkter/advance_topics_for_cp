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
    int a[n];
    vector<int>v;
    int mx=0,sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        mx=max(mx,a[i]);
        if(a[i]==0){
            sum+=mx;
            // mx=0;
        }
        if(a[i]==0&&a[i+1]!=0){
            sum+=mx;
            mx=0;
        }
    }
    c(sum);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}