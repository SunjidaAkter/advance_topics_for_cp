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
    int n,m,mx=0;cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            vector<int>v;
            v.push_back(a[i][j]);
            int x=i+1,y=j+1,sum=0;
            while(x<n && y<m){
                v.push_back(a[x][y]);
                x++,y++;
            }
            x=i+1,y=j-1;
            while(x<n && y>=0){
                v.push_back(a[x][y]);
                x++,y--;
            }
            x=i-1,y=j-1;
            while(x>=0 && y>=0){
                v.push_back(a[x][y]);
                x--,y--;
            }
            x=i-1,y=j+1;
            while(x>=0 && y<m){
                v.push_back(a[x][y]);
                x--,y++;
            }
            for(int val:v)sum+=val;
            mx=max(sum,mx);
        }
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