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
    ll x,y,k;cin>>x>>y>>k;
    vector<ll>v;
    while(x){
        v.push_back(x%y);
        x/=y;
    }
    ll sum=0;
    for(ll i=0;i<v.size();i++){
        ll d=y-v[i];
        if(k>=d){
            k-=d;
            if(i<v.size()-1){
                v[i+1]++;
            }
        }else{
            v[i]+=k;
            for(ll j=v.size()-1;j>=i;j--){
                sum=sum*y+v[j];
            }
            break;
        }
        if(i==v.size()-1){
            sum=1+(k%(y-1));
        }
    }
    cout<<sum<<nl;
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