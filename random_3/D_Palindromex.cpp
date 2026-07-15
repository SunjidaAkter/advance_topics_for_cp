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
    ll q;cin>>q;
    ll n=2*q;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll x1=0,y1=0;
    for(ll i=0;i<n;i++){
        if(v[i]==0){
            x1=i;
            break;
        }
    }
    for(ll i=x1+1;i<n;i++){
        if(v[i]==0){
            y1=i;
            break;
        }
    }
    ll x=x1+1,y=y1-1;
    ll mx=-1;
    vector<ll>a(q);
    a[0]=1;
    while(x<=y){
        if(v[x]==v[y]){
            a[v[x]]++;
            x++,y--;
        }else break;
    }
    if(x>y||x==y){
        x=x1-1,y=y1+1;
        while(x>=0 && y<n){
            if(v[x]==v[y]){
                a[v[x]]++;
                x--;y++;
            }else break;
        }
        for(ll i=0;i<q;i++){
            if(a[i]==0){
                cout<<i<<nl;
                return;
            }
        }
        cout<<q<<nl;
        return;
    }
    for(ll i=1;i<q;i++)a[i]=0;
    x=x1-1,y=x1+1;
    while(x>=0 && y<n && v[x]==v[y]){
        a[v[x]]++;
        x--,y++;
    }
    ll a1=-1,a2=-1;
    ll cnt=0;
    for(ll i=0;i<q;i++){
        if(a[i]==0){
            a1=i;
            break;
        }
    }
    if(a1==-1)a1=q;
    for(ll i=1;i<q;i++)a[i]=0;
    x=y1-1,y=y1+1;
    while(x>=0 && y<n && v[x]==v[y]){
        a[v[x]]++;
        x--,y++;
    }
    for(ll j=0;j<q;j++){
        if(a[j]==0){
            a2=j;
            break;
        }
    }
    if(a2==-1)a2=q;
    for(ll i=1;i<q;i++){
        if(a[i]==0){
            cnt++;
        }
    }
    cout<<max(a1,a2)<<nl;
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