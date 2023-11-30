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
    int a[n],ans=n;
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>pos(n+1),len(n+1);
    for(int i=0;i<n;i++){
        pos[a[i]]=i+1;
    }
    len[n]=0;
    for(int i=n-1;i>=1;i--){
        if(pos[i]<pos[i+1])len[i]=len[i+1]+1;
        else len[i]=0;
    }
    for(int i=1;i<=n;i++){
        ans=min(ans,max(i-1,n-(i+len[i])));
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