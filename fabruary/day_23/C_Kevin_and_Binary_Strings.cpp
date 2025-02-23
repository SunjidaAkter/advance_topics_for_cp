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
    string s;cin>>s;
    ll x=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            x=i;
            break;
        }
    }
    if(x==-1){
        cout<<1<<" "<<s.size()<<" "<<s.size()<<" "<<s.size()<<nl;
        return;
    }
    ll y=x-1;
    for(ll i=x;i<s.size()&&y>=0;i++){
        if(s[i]=='1')break;
        y--;
    }
    y++;
    cout<<1<<" "<<s.size()<<" "<<y+1<<" "<<s.size()-(x-y)<<nl;
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