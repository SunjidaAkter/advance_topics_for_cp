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
    int n,x;cin>>n>>x;
    int a[n];
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    bool ok=0;
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    sort(all(b));
    if(n>=2*x)yes;
    else{
        for(int i=n-x;i<x;i++){
            if(a[i]!=b[i]){ok=1;break;}
        }
        if(ok)no;
        else yes;
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