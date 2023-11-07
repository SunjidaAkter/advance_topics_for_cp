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
    int n,k,len,sum=0;cin>>n>>k>>len;
    vector<int>v;
    while(n--){
        int x,y;cin>>x>>y;
        if(y==len)v.push_back(x);
    }
    sort(all(v));
    reverse(all(v));
    if(v.size()<k)c(-1);
    else{
        for(int i=0;i<k;i++)sum+=v[i];
        c(sum);
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