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
    string s;cin>>s;bool ok=1;
    ll l=0,sort=0,unsort=INT_MAX;
    for(int i=0;i<s.size();i++){
        switch (s[i]){
            case '+':l++;break;
            case '-':l--;break;
            case '1':sort=l;break;
            case '0':if(unsort==INT_MAX)unsort=l;break;
        }
        if(l<sort)sort=l;
        if(l<unsort)unsort=INT_MAX;
        if((s[i]=='0'&&(l==sort))||(s[i]=='0'&&(l<2))||(s[i]=='1'&&(unsort<=l)))ok=0;
    }
    if(ok)yes;
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