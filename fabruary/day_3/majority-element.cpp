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
ll majorityElement(vector<ll>& nums) {
    ll cnt=0,res=0;
    for(ll i=0;i<nums.size();i++){
        if(cnt==0)res=nums[i];
        cnt+=(res==nums[i]?1:-1);
    }
    return res;
}
void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    ll maj=majorityElement(a);
    cout<<maj<<endl;
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