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
const ll N=1e5+5;
ll tree[N*3];
void build(ll node,ll l,ll r,ll a[]){
    if(l==r){
        tree[node]=a[r];
        return;
    }
    ll leftNode=2*node;
    ll rightNode=leftNode+1;
    ll mid=(l+r)/2;
    build(leftNode,l,mid,a);
    build(rightNode,mid+1,r,a);
    tree[node]=tree[leftNode]+tree[rightNode];
} 
void update(ll node,ll l,ll r,ll idx,ll val){
    if(idx<l||idx>r)return;
    if(l==r&&idx==l){
        tree[node]+=val;
        return;
    }
    ll leftNode=2*node;
    ll rightNode=leftNode+1;
    ll mid=(l+r)/2;
    update(leftNode,l,mid,idx,val);
    update(rightNode,mid+1,r,idx,val);
    tree[node]=min(tree[leftNode],tree[rightNode]);//merge
}
void update1(ll node,ll l,ll r,ll idx,ll val){
    if(idx<l||idx>r)return;
    if(l==r&&idx==l){
        tree[node]=val;
        return;
    }
    ll leftNode=2*node;
    ll rightNode=leftNode+1;
    ll mid=(l+r)/2;
    update1(leftNode,l,mid,idx,val);
    update1(rightNode,mid+1,r,idx,val);
    tree[node]=tree[leftNode]+tree[rightNode];//merge
}
ll query(ll node,ll l,ll r,ll x,ll y){
    if(x>r||y<l)return 0;
    if(x>=l&&y<=r){
        return tree[node];
    }
    ll leftNode=2*node;
    ll rightNode=leftNode+1;
    ll mid=(l+r)/2;
    query(leftNode,l,mid,x,y);
    query(rightNode,mid+1,r,x,y);
    return min(query(leftNode,l,mid,x,y),query(rightNode,mid+1,r,x,y));//merge
}
ll test=1;
void solve(){
    
    cout<<"Case "<<test<<":"<<nl;
    ll n,q;cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    build(1,0,n-1,a);
    while(q--){
        ll x,y;cin>>x>>y;
        cout<<query(1,0,n-1,x,y)<<nl;
    }
    test++;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}