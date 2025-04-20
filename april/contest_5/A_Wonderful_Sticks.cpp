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
    string s;cin>>s;
    ll y=n;
    ll a[n];
    if(n==2&&s[0]=='<'){cout<<"2 1"<<nl;return;}
    if(n==2&&s[0]=='>'){cout<<"1 2"<<nl;return;}
    for(ll i=0;i<n;i++)a[i]=0;
    ll x=1;
    for(ll i=0;i<y-2;i++){
        if(s[i]=='>'&&s[i+1]=='<'){a[i+1]=n;n--; }
        else if(s[i]=='<'&&s[i+1]=='>'){a[i+1]=x;x++;}
    }
    for(ll i=0;i<y-1;i++){
        if(s[i]=='<'&&a[i]==0){a[i]=n;n--;}
        else if(s[i]=='>'&&a[i+1]==0){a[i+1]=x;x++;}
    }
    
    if(a[0]==0&&s[0]=='>'){a[0]=x;x++;}
    if(a[0]==0&&s[0]=='<'){a[0]=n;n--;}
    if(a[y-1]==0&&s[0]=='>'){a[y-1]=n;n--;}
    if(a[y-1]==0&&s[0]=='<'){a[y-1]=x;x++;}
    for(ll i=0;i<y;i++)cout<<a[i]<<" ";
    cout<<nl;
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