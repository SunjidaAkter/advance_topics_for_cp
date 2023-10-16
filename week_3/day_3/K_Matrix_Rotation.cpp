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
    int a[2][2];
    for(int i=0;i<2;i++)for(int j=0;j<2;j++)cin>>a[i][j];
    bool flag=true;
    if((a[0][0]<a[0][1]&&a[1][0]>a[1][1])||(a[0][0]>a[0][1]&&a[1][0]<a[1][1]))flag=false;
    if((a[0][0]<a[1][0]&&a[0][1]>a[1][1])||(a[0][0]>a[1][0]&&a[0][1]<a[1][1]))flag=false;
    if(flag)yes;
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