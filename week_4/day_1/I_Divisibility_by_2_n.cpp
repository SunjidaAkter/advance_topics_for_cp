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
    int cnt=0;
    for(int i=0;i<n;i++){
        int tmp=a[i];
        while(tmp%2==0){
            cnt++;tmp/=2;
        }
    }
    // cout<<cnt<<nl;
    if(cnt>=n)c(0);
    else{
        int d=n-cnt;
        int ans=0;
        vector<int>v;
        for(int i=1;i<=n;i++){
            int tmp=i,c=0;
            while(tmp%2==0){
                c++;tmp/=2;
            }
            v.pub(c);
        }
        sort(all(v),greater<int>());
        for(auto val:v){
            d-=val;
            ans++;
            if(d<=0)break;
            // cout<<val<<" ";
        }
        // cout<<nl;
        if(d>0)c(-1);
        else c(ans);
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}