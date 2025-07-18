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
    ll a,b,c;cin>>a>>b>>c;
    if(((b-a)+b)%c==0&&((b-a)+b)>=c)yes;
    else if((b-(c-b))%a==0&&(b-(c-b))>=a)yes;
    else if((c-a)%2==0){
        if((((c-a)/2)+a)%b==0&&(((c-a)/2)+a)>=b)yes;
        else no;
    }
    else no;
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