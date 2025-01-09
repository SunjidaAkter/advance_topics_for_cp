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
    int n=s.size(),ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='?')ans++;
    }
    if(s[0]=='0'&&ans==0){
        cout<<0<<nl;
        return;
    }
    if(s[0]!='0'&&ans==0){
        cout<<1<<nl;
        return;
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