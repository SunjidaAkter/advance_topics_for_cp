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
    ll n,m,k;cin>>n>>m>>k;
    k--;
    ll low=1,high=n;
    while(low<high){
        ll mid=high-(high-low)/2;
        ll day=LLONG_MAX;
        for(ll l=0,r=mid-1;r<n;l++,r++){
            if(k<l)break;
            if(k>r)continue;
            ll left=k-l;
            ll right=r-k;
            ll need=left-1+max(left,right)+right;
            day=min(day,need);
        }
        if(day<=m){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    cout<<low<<nl;
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