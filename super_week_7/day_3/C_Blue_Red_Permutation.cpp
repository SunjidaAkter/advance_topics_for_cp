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
typedef pair<ll,char>pii;
void solve(){
    ll n;cin>>n;
    ll a[n];
    bool f=1;
    for(ll i=0;i<n;i++)cin>>a[i];
    string s;cin>>s;
    vector<ll>b,r;
    for(ll i=0;i<n;i++){
        if(a[i]<=0&&s[i]=='B'){
            f=0;
            break;
        }
        if(a[i]>n&&s[i]=='R'){
            f=0;
            break;
        }
    }
    for(ll i=0;i<n;i++){
        if(s[i]=='B'){
            b.push_back(a[i]);
        }
        if(s[i]=='R'){
            r.push_back(a[i]);
        }
    }
    // for(ll i=0;i<b.size();i++)cout<<b[i]<<" ";
    // cout<<nl;
    // for(ll i=0;i<b.size();i++)cout<<a[i]<<" ";
    // cout<<nl;
    sort(all(b));
    sort(all(r));
    ll i=0;
    ll j=0;
    if(!b.empty()){
        while(j<b.size()){
            if(b[i]<j+1){
                f=0;
                // cout<<j<<" "<<b[i]<<"j";
                // break;      
            }
            i++;
            j++;
        }
    }
    i=0;
    if(!r.empty()){
        while(j<n){
            if(r[i]>j+1){
                // cout<<"k";
                // cout<<j<<" "<<r[i]<<"k";
                f=0;
                break;      
            }
            i++;
            j++;
        }
    }
    if(f)yes;
    else no;
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