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
    ll n,sum=0;cin>>n;
    string s;cin>>s;
    priority_queue<ll>pq;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='0'){
            if(!pq.empty()){
                pq.pop();
            }
            sum+=(i+1);
        }else{
            pq.push(i+1);
        }
    }
    vector<ll>v;
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    sort(all(v));
    for(ll i=0;i<(v.size()/2)+(v.size()%2);i++){
        sum+=v[i];
    }
    cout<<sum<<nl;
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