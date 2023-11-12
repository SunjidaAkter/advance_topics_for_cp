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
    vector<int>a(n);
    vector<int>v;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.rbegin(),a.rend());
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i-1]!=a[i])v.push_back(a[i]);
    }
    sort(v.rbegin(),v.rend());
    cout<<v[0]+v[1]<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}