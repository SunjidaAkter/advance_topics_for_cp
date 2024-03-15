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
vector<ll> getdiv(ll n){
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans.push_back(i);
            if (n / i != i){
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}
void solve(){
    ll a,b,l,cm;cin>>a>>b>>l;
    vector<ll> k=getdiv(l);
    vector<ll>x,y;
    for(ll i=0;i<=20;i++){
        cm=pow(a,i);
        if(cm<=1e6)x.push_back(cm);
        else break;
    }
    for(ll i=0;i<=20;i++){
        cm=pow(b,i);
        if(cm<=1e6)y.push_back(cm);
        else break;
    }
    ll cnt=0;
    for(ll i=0;i<(ll)k.size();i++){
        bool f=0;
        for(ll j=0;j<(ll)x.size();j++){
            for(ll z=0;z<(ll)y.size();z++){
                if(k[i]*x[j]*y[z]==l){
                    cnt++;
                    f=1;
                    break;
                }
            }    
            if(f==1)break;
        }
    }
    cout<<cnt<<nl;
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