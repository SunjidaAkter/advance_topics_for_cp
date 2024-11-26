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
    bool b = false;
    vector<char>u;
    vector<char>v;
    vector<char>u1;
    vector<char>v1;
    for(ll i=0;i<n;i++){
        if('a'<=s[i]&&s[i]<='z'){
            b=true;
            u.push_back(s[i]);
            u1.push_back(s[i]);
        }
        if(!b && '0'<=s[i]&&s[i]<='9'){
            v.push_back(s[i]);
            v1.push_back(s[i]);
        }else if(b && '0'<=s[i]&&s[i]<='9'){
            no;
            return;
        }
    }
    sort(all(u));
    sort(all(v));
    if(u==u1 && v==v1)yes;
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