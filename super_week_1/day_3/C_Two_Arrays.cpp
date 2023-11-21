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
    vector<int> a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        b.push_back(x);
    }
    sort(all(a));
    sort(all(b));
    bool ok=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]||a[i]+1==b[i])continue;
        else {ok=1;break;}
    }
    if(ok)no;
    else yes;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}