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
    int a[n],mn=INT_MAX,mx=0;
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v;
    for(int i=0;i<n;i++){
        if(i==0)v.push_back(abs(a[i]-a[i+1]));
        else if(i==n-1)v.push_back(abs(a[i]-a[i-1]));
        else v.push_back(max(abs(a[i-1]-a[i]),abs(a[i]-a[i+1])));
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}