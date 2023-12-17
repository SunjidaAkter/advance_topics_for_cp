#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
const ll mx=1e5+5;
class Node{
    public:
    ll leftMost,rightMost,frLeftMost,frRightMost,ans;
    Node(ll a,ll b,ll c,ll d,ll e){
        leftMost=a;
        rightMost=b;
        frLeftMost=c;
        frRightMost=d;
        ans=e;
    }
    Node(){}
};
Node tree[3*mx];
Node merge(Node a,Node b){
    if(a.ans==0)return b;
    if(b.ans==0)return a;
    Node n;
    n.leftMost=a.leftMost;
    n.rightMost=b.rightMost;
    if(a.leftMost==b.rightMost){
        n.frLeftMost=a.frLeftMost+b.frRightMost;
        n.frRightMost=a.frLeftMost+b.frRightMost;
        n.ans=a.frLeftMost+b.frRightMost;
    }else if(a.leftMost==b.leftMost){
        n.frLeftMost=a.frLeftMost+b.frLeftMost;
        n.frRightMost=b.frRightMost;
        n.ans=max(n.frLeftMost,b.ans);
    }else if(a.rightMost==b.rightMost){
        n.frLeftMost=a.frLeftMost;
        n.frRightMost=a.frRightMost+b.frRightMost;
        n.ans=max(n.frRightMost,a.ans);
    }else if(a.rightMost==b.leftMost){
        n.frLeftMost=a.frLeftMost;
        n.frRightMost=b.frRightMost;
        n.ans=max({a.ans,b.ans,a.frRightMost+b.frLeftMost});
    }else{
        n.frLeftMost=a.frLeftMost;
        n.frRightMost=b.frRightMost;
        n.ans=max(a.ans,b.ans);
    }
    return n;
}
void build(ll node,ll l,ll r,vector<ll>&a){
    if(l==r){
        tree[node].leftMost=a[l];
        tree[node].rightMost=a[r];
        tree[node].frLeftMost=1;
        tree[node].frRightMost=1;
        tree[node].ans=1;
        return;
    }
    ll mid=l+(r-l)/2;
    ll leftNode=2*node;
    ll rightNode=leftNode+1;
    build(leftNode,l,mid,a);
    build(rightNode,mid+1,r,a);
    tree[node]=merge(tree[leftNode],tree[rightNode]);
}
Node query(ll node,ll l,ll r,ll a,ll b){
    if(r<a||l>b)return Node(0,0,0,0,0);
    if(a<=l&&b>=r){
        return tree[node];
    }
    ll mid=l+(r-l)/2;
    ll leftNode=2*node;
    ll rightNode=leftNode+1;
    return merge(query(leftNode,l,mid,a,b),query(rightNode,mid+1,r,a,b));
} 
int main(){
    ll n,q;
    while(cin>>n){
        if(n==0)break;
        cin>>q;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        build(1,0,n-1,a);
        while(q--){
            ll x,y;cin>>x>>y;
            x--,y--;
            cout<<query(1,0,n-1,x,y).ans<<endl;
        }
    }
    return 0;
}