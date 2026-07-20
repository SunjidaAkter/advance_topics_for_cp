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
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll pos=0,neg=0;
    for(ll i=0;i<n;i++){
        if(v[i]<0)neg++;
        if(v[i]>0)pos++;
    }
    if(n%2)no;
    else{
        if(n==2){
            if(n==pos||n==neg)no;
            else yes;
        }else {
            if(pos==neg){yes;return;}
            ll sum=0;
            vector<ll>a;
            for(ll i=0;i<n-1;i+=2){
                sum+=(v[i]+v[i+1]);
                a.push_back(sum);
                sum=0;
            }
            for(ll i=0;i<a.size();i++)sum+=a[i];
            if(sum%4==0)yes;
            else no;
        }
    }
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