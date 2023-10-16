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
    vector<vector<int>>v(n,vector<int>(n-1));
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>v[i][j];
            mp[v[i][j]].push_back(j+1);
        }
    }
    vector<int>f(n);
    for(auto &it:mp){
        sort(it.second.begin(),it.second.end(),greater<int>());
        if(it.second[0]<=n-2)f[it.second[0]-1]=it.first;
        else{
            if(it.second[0]==it.second[it.second.size()-1])f[n-1]=it.first;
            else f[n-2]=it.first;
        }
    }
    for(int val:f)cout<<val<<" ";
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