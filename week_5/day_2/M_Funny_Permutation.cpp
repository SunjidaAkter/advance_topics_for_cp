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
    if(n==3){cout<<-1<<nl;return;}
    if(n==2){cout<<2<<" "<<1<<nl;return;}
    vector<int>v;
    for(int i=(n/2)+1;i<=n;i++)v.push_back(i);
    for(int i=1;i<(n/2)+1;i++)v.push_back(i);
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}