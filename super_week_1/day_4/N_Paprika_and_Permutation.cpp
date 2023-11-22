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
    set<int>st;
    vector<int>v;
    for(int i=1;i<=n;i++)st.insert(i);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(st.find(x)!=st.end())st.erase(x);
        else v.push_back(x);
    }
    sort(all(v));
    reverse(all(v));
    bool er=0;
    for(int val:v){
        int last=*(--(st.end()));
        if(last>((val)/2)){er=1;break;}
        else st.erase(last);
    }
    if(er)c(-1);
    else c(v.size());
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}