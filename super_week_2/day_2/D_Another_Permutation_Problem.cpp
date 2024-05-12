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
    for(int i=1;i<=n;i++)a[i]=i;
    int ans=0;
    for(int k=1;k<=n;k++){
        int sum=0;
        int mx=0;
        for(int i=1;i<=n;i++){
            if(i<k){
                sum+=i*i;
                mx=max(mx,i*i);
            }else{
                sum+=((n+k-i)*i);
                mx=max(mx,((n+k-i)*i));
            }
        }
        ans=max(ans,sum-mx);
    }
    c(ans);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}