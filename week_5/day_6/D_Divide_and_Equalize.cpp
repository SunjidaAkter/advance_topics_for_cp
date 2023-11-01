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
    for(int i=0;i<n;i++)cin>>a[i];
    int l=0,r=INT_MAX;
    bool finalAns=false;
    while(l<=r){
        int mid=l+(r-l)/2;
        double ans=1.0;
        for(int i=0;i<n;i++){
            ans*=(a[i]*1.0/mid);
        }
        if(fabs(ans-1.0)<1e-15){
            finalAns=true;
            break;
        }else if(ans>1.0)l=mid+1;
        else r=mid-1;
    }
    if(finalAns)yes;
    else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}