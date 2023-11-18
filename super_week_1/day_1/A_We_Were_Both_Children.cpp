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
    int a[n+1]={0};
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<=n)a[x]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            mp[j]+=a[i];
        }
    }
    int mx=0;
    for(auto it:mp){
        mx=max(mx,it.second);
    }
    cout<<mx<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}