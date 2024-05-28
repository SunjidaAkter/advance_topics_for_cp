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
class Contest{
    public:
    ll x;
    ll y;
    Contest(ll x, ll y){
        this->x=x;
        this->y=y;
    }
};
class cmp{
    public:
    bool operator()(Contest a,Contest b){
        if(a.x<b.x)return true;
        else if(a.x>b.x)return false;
        else{
            if(a.y>b.y)return true;
            else return false;
        }
    }
};
void solve(){
    ll n,k;cin>>n>>k;
    priority_queue<Contest,vector<Contest>,cmp>pq;
    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        Contest obj(a,b);
        pq.push(obj);
    }
    ll f,s,i=0,cnt=0;
    vector<pii>v;
    while(pq.size()>0){
        if(i==k-1){
            f=pq.top().x;
            s=pq.top().y;
        }
        v.push_back({pq.top().x,pq.top().y});
        // cout<<v.back().first<<" "<<v.back().second<<nl;
        pq.pop(),i++;
    }
    for(auto val:v){
        if(val.first==f&&val.second==s)cnt++;
    }
    cout<<cnt<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}