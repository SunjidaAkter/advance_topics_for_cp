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
    ll n;cin>>n;
    ll a[n],cnt=0,cnt2=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++){
        if(a[i]==25)cnt++;
        else if(a[i]==50&&cnt>0){
            cnt2++;
            cnt--;
        }else if(a[i]==100){
            if(cnt2>0&&cnt>0){
                cnt2--;
                cnt--;
            }else if(cnt>2){
                cnt-=3;
            }else{
                no;
                return;
            }
        }else{
            no;
            return;
        }
    }
    yes;
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