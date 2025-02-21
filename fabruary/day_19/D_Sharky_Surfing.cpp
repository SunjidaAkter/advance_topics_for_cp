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
  ll n,m,k,j=0,power=1;cin>>n>>m>>k;
  vector<pii>a(n),b(m);
  for(auto &x:a)cin>>x.first>>x.second;       
  for(auto &x:b)cin>>x.first>>x.second;       
  priority_queue<ll>pq;
  for(ll i=0;i<n;i++){
    while(j<m&&b[j].first<a[i].first){
      pq.push(b[j].second);
      j++;
    }
    ll d=a[i].second-a[i].first+2;
    while(pq.size()>0&&power<d){
      power+=pq.top();
      pq.pop();
    }
    if(power<d){
      cout<<-1<<nl;
      return;
    }
  }
  while(j<m){
    pq.push(b[j].second);
    j++;
  }
  cout<<m-pq.size()<<nl;
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