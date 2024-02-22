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
const int MOD = 1e9 + 7;
unsigned power(ll x, ll y, ll p =  MOD)
{
    unsigned long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
string decToBinary(ll n) 
{ 
    // Size of an integer is assumed to be 32 bits 
    string s;
    for (ll i = 31; i >= 0; i--) { 
        ll k = n >> i; 
        if (k & 1) 
            s.push_back('1'); 
        else
            s.push_back('0'); 
    } 
    return s;
}
bool issubsequence(string& s, string& t)
{
    queue<char> q;
    ll cnt = 0;
    // push the string t in queue;
    for (ll i = 0; i < t.size(); i++) {
        q.push(t[i]);
    }
    ll i = 0;
    // traverse throgh the entire queue
    while (!q.empty()) {
        // check if the ith element in s is equal to front
        // element
        if (s[i] == q.front()) {
            cnt++;
            i++;
        }
        // pop element of queue after each iteration
        q.pop();
    }
    // check for the cnt length
    if (cnt == s.size())
        return true;
    else
        return false;
}
void solve(){
    ll n;cin>>n;
    string c="101";
    string l=decToBinary(n);
    if(!issubsequence(c,l)){
        cout<<0<<nl;
        return;
    }
    ll ans=0;
    while(n){
        ll i=l.size()-1;
        for(;i>=0;i--){
            if(l[i]=='1')break;
        }
        n+=power(2,l.size()-1-i,LONG_MAX);
        ans+=power(2,l.size()-1-i,LONG_MAX);
        l=decToBinary(n);
        if(!issubsequence(c,l))break;
    } 
    cout<<ans<<nl;
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