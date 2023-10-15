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
    int n,s,r;
    cin>>n>>s>>r;
    vector<int>v(n);
    v[n-1]=s-r;
    for(int i=0;i<n-1;i++){
        v[i]=r/(n-1);
    }

    int i=n-2,step=r%(n-1);
    while(step--){
        v[i]++;
        i--;
    }
    for(int val:v)cout<<val<<" ";
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