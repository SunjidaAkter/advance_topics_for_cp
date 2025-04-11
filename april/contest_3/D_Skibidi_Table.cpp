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
pii pos(ll d,ll k) {
    if (k==1) {
        if(d==1)return {1,1};
        else if(d==2)return {2,2};
        else if(d==3)return {2,1};
        else return {1,2};
    }
    ll m=1<<(k-1);
    ll s=m*m,q;
    if(d<=s)q=0;
    else if(d<=2*s)q=1,d-=s;
    else if(d<=3*s)q=2,d-=2*s;
    else q=3,d-=3*s;
    pii p=pos(d,k-1);
    ll x=p.first;
    ll y=p.second;
    if(q==1)x+=m,y+=m;
    else if(q==2)x+=m;
    else if(q==3)y+=m;
    return {x,y};
}
ll number(ll x,ll y,ll k) {
    if (k==1) {
        if(x==1&&y==1)return 1;
        else if(x==1&&y==2)return 4;
        else if(x==2&&y==1)return 3;
        else return 2;
    }
    ll m=1<<(k-1);
    ll s=m*m,q;
    if(x<=m&&y<=m)q=0;
    else if(x>m&&y>m)q=1;
    else if(x>m&&y<=m)q=2;
    else q=3;
    ll b=q*s;
    ll nx=x,ny=y;
    if(q==1)nx-=m,ny-=m;
    else if(q==2)nx-=m;
    else if(q==3)ny-=m;
    return b+number(nx,ny,k-1);
}

void solve(){
    ll n,q;cin>>n>>q;
    while(q--){
        string tp;cin>>tp;
        if(tp=="->"){
            ll x,y;cin>>x>>y;
            cout<<number(x,y,n)<<nl;
        }else{
            ll d;cin>>d;
            pii pp=pos(d,n);
            ll x=pp.first;
            ll y=pp.second;
            cout<<x<<' '<<y<<nl;
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
