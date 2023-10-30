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
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int sum1=0,res=n+1;
    for(int i=0;i<n;i++){
        sum1+=a[i];
        int sum2=0,ans=i,cnt=0;
        for(int j=i+1;j<n;j++){
            sum2+=a[j];
            cnt++;
            if(sum1==sum2){
                ans=max(ans,cnt);
                cnt=0;
                sum2=0;
            }
        }
        if(sum2==0)res=min(ans,res);
    }
    cout<<res<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}