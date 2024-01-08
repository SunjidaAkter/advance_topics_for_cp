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
class info{
    public:
    ll score,penalty,index;
    info(ll a,ll b,ll c){
        score=a;
        penalty=b;
        index=c;
    }
};
void solve(){
    ll n,m,h;cin>>n>>m>>h;
    vector<vector<ll>>v(n,vector<ll>(m));
    vector<info>points;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>v[i][j];
        }
        sort(all(v[i]));
        ll time=0;
        ll score=0;
        ll penalty=0;
        for(ll j=0;j<m;j++){
            if(v[i][j]+time<=h){
                time+=v[i][j];
                score++;
                penalty+=time;
            }
        }
        info tmp(score,penalty,i);
        points.push_back(tmp);
    }
    sort(all(points),[](info &a,info &b){
        if(a.score==b.score){
            if(a.penalty==b.penalty){
                return a.index<b.index;
            }
            return a.penalty<b.penalty;
        }
        return a.score>b.score;
    });
    for(ll i=0;i<n;i++){
        if(points[i].index==0){
            cout<<i+1<<nl;
            return;
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