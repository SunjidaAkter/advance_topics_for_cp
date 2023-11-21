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
    vector<int>a;
    for(int i=0;i<n;i++){int x;cin>>x;a.push_back(x);}
    bool ok=1;
    for(int i=0;i<n;i++){
        bool check=0;
        for(int j=i+2;j>=2;j--){
            if(a[i]%j){check=1;break;}
        }
        ok=ok&check;
    }
    if(ok)yes;
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