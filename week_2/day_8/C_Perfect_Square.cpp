#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define Yes cout << "Yes" << nl
#define No cout << "No" << nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    int n;cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int last=n-1,ans=0;
    for(int i=0;i<n/2;i++){
        int x=i,y=last;
        for(int j=i;j<last;j++){
            vector<char>v;
            v.push_back(a[i][j]);
            v.push_back(a[x][last]);
            v.push_back(a[last][y]);
            v.push_back(a[y][i]);
            sort(all(v));
            for(int k=0;k<3;k++)ans+=(v[3]-v[k]);
            x++;y--;
        }
        last--;
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}