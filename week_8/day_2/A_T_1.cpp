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
const int N=1e5+5;
int tree[N*3];
void build(int node,int l,int r,int a[]){
    if(l==r){
        tree[node]=a[r];
        return;
    }
    int leftNode=2*node;
    int rightNode=leftNode+1;
    int mid=(l+r)/2;
    build(leftNode,l,mid,a);
    build(rightNode,mid+1,r,a);
    tree[node]=tree[leftNode]+tree[rightNode];
} 
int first(int node,int l,int r,int idx){
    if(idx<l||idx>r)return 0;
    if(l==r&&idx==l){
        int x=tree[node];
        tree[node]=0;
        return x;
    }
    int leftNode=2*node;
    int rightNode=leftNode+1;
    int mid=(l+r)/2;
    first(leftNode,l,mid,idx);
    first(rightNode,mid+1,r,idx);
    return first(leftNode,l,mid,idx)+first(rightNode,mid+1,r,idx);//merge
}
void update(int node,int l,int r,int idx,int val){
    if(idx<l||idx>r)return;
    if(l==r&&idx==l){
        tree[node]+=val;
        return;
    }
    int leftNode=2*node;
    int rightNode=leftNode+1;
    int mid=(l+r)/2;
    update(leftNode,l,mid,idx,val);
    update(rightNode,mid+1,r,idx,val);
    tree[node]=tree[leftNode]+tree[rightNode];//merge
}
void update1(int node,int l,int r,int idx,int val){
    if(idx<l||idx>r)return;
    if(l==r&&idx==l){
        tree[node]=val;
        return;
    }
    int leftNode=2*node;
    int rightNode=leftNode+1;
    int mid=(l+r)/2;
    update1(leftNode,l,mid,idx,val);
    update1(rightNode,mid+1,r,idx,val);
    tree[node]=tree[leftNode]+tree[rightNode];//merge
}
int query(int node,int l,int r,int x,int y){
    if(x>r||y<l)return 0;
    if(x>=l&&y<=r){
        return tree[node];
    }
    int leftNode=2*node;
    int rightNode=leftNode+1;
    int mid=(l+r)/2;
    query(leftNode,l,mid,x,y);
    query(rightNode,mid+1,r,x,y);
    return query(leftNode,l,mid,x,y)+query(rightNode,mid+1,r,x,y);//merge
}
void solve(){
    // cout<<"Case "<<y<<":"<<nl;
    int n,q;cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    build(1,0,n-1,a);
    while(q--){
        int t;cin>>t;
        if(t==1){
            int x;cin>>x;
            cout<<a[x]<<nl;
            update1(1,0,n-1,x,0);
        }else if(t==2){
            int idx,val;cin>>idx>>val;
            update(1,0,n-1,idx,val);
        }else if(t==3){
            int x,y;cin>>x>>y;
            cout<<query(1,0,n-1,x,y)<<nl;
        }
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