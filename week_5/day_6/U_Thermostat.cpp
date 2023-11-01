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
    int l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b)cout<<0<<nl;
    else if(a<b){
        if(b-a>=x)cout<<1<<nl;
        else if(a-l>=x)cout<<2<<nl;
        else if(r-b>=x)cout<<2<<nl;
        else if(r-a>=x&&b-l>=x)cout<<3<<nl;
        else cout<<-1<<nl;
    }else{
        if(a-b>=x)cout<<1<<nl;
        else if(b-l>=x)cout<<2<<nl;
        else if(r-a>=x)cout<<2<<nl;
        else if(r-b>=x&&a-l>=x)cout<<3<<nl;
        else cout<<-1<<nl;
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