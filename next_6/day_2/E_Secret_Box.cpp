#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll x,y,z,k;cin>>x>>y>>z>>k;
    ll vol=x*y*z,mx=max({x,y,z});
    ll cnt=0;
    for(ll i=1;i<=mx;i++){
        for(ll j=1;j<=mx;j++){
            ll c1=i,c2=j,c3=-1;
            if(k%(c1*c2)==0){
                c3=k/(c1*c2);
                ll c=c1*c2*c3;
                if(c>vol)continue;
                if(c1<=x&&c2<=y&&c3<=z){
                    ll f1=(x-c1)+1,f2=(y-c2)+1,f3=(z-c3)+1;
                    ll f=f1*f2*f3;
                    cnt=max(cnt,f);
                }
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}