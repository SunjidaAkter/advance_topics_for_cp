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
    int a[2][n];
    a[0][0]=2*n;
    a[1][n-1]=2*n-1;
    int cur=1;
    for(int i=0;i<n;i++){
        a[(i+1)%2][i]=cur;
        cur++;
    }
    cur=2*n-2;
    for(int i=2;i<n;i+=2){
        a[0][i]=cur;
        a[1][i-1]=cur-1;
        cur-=2;
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
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