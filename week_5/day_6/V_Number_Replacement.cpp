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
    vector<pii> a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[i]={x,i};
    }
    string s;cin>>s;
    if(n!=s.size())no;
    else{
        bool ok=true;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i].first==a[j].first){
                    if(s[i]!=s[j]){ok=false;break;}
                }
            }
        }
        if(ok)yes;
        else no;
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