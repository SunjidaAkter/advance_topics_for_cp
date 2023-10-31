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
    int n,cnt=0;cin>>n;
    vector<pii>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v[i]={x,i};
        mp[v[i].first]++;
    }
    for(int i=0;i<n;i++){
        if(mp[v[i].first]>1){
            mp[v[i].first]--;
            cnt=(i+1);
        }
    }
    c(cnt);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}