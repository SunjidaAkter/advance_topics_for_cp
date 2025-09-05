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
    ll n,sum=0;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    ll mx=sum;
    ll cnt=n;
    while(cnt>1){
        sum=0;
        vector<ll>temp=v;
        // ll tmp=v[0];
        for(ll i=0;i<cnt-1;i++){
            ll tmp=v[i];
            v[i]=v[i+1]-tmp;
        }
        v.pop_back();
        for(ll i=0;i<v.size();i++)sum+=v[i];
        mx=max(mx,sum);
        reverse(all(temp));
        for(ll i=0;i<cnt-1;i++){
            ll tmp=temp[i];
            temp[i]=temp[i+1]-tmp;
        }
        // cout<<temp[0]<<"-----"<<nl;
        temp.pop_back();
        sum=0;
        for(ll i=0;i<temp.size();i++)sum+=temp[i];
        mx=max(mx,sum);
        
        cnt--;
    }
    cout<<mx<<nl;
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