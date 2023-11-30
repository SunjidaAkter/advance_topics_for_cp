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
    int a[n+1][n+1];
    int l=1,r=n*n,c=1;
    for(int i=1;i<=n;i++){
        if(i&1){
            for(int j=1;j<=n;j++){
                if(c&1){
                    a[i][j]=l;
                    l++;
                }else{
                    a[i][j]=r;
                    r--;
                }
                c++;
            } 
        }else{
            for(int j=n;j>=1;j--){
                if(c&1){
                    a[i][j]=l;
                    l++;
                }else{
                    a[i][j]=r;
                    r--;
                }
                c++;
            } 

        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
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