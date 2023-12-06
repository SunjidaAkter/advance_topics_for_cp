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
void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>mp(n+1,0);
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    // for(int i=1;i<=n;i++){
    //     cout<<mp[i]<<" ";
    // }
    bool ok=0;
    priority_queue<ll>pq;
    vector<int>p(n),q(n),pair(n+1);
    for(int i=1;i<=n;i++){
        if(mp[i]==0)pq.push(i);
    }
    for(int i=n;i>=1;i--){
        if(mp[i]==1){
            pair[i]=i;
        }else if(mp[i]==2){
            if(i>pq.top()){
                pair[i]=pq.top();
                pair[pq.top()]=i;
                pq.pop();
            }else{
                ok=1;break;
            }
        }else if(mp[i]>2){
            ok=1;break;
        }
    }
    // for(int i=1;i<=n;i++)cout<<pair[i]<<" ";
    // cout<<nl;
    bool vis[n+1]={0};
    if(ok)cout<<"NO"<<nl;
    else{
        yes;
        for(int i=0;i<n;i++){
            if(!vis[a[i]]){
                p[i]=a[i];
                q[i]=pair[a[i]];
                vis[a[i]]=1;
            }else{
                p[i]=pair[a[i]];
                q[i]=a[i];
                // swap(p[i],p[pair[a[i]]]);
            }
        }
        for(int i=0;i<n;i++)cout<<p[i]<<" ";
        cout<<nl;
        for(int i=0;i<n;i++)cout<<q[i]<<" ";
        cout<<nl;
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