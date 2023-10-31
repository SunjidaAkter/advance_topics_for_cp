#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
bool isPalindrome(ll n) { 
    string str = to_string(n); 
    int len = str.length(); 
    for(ll i = 0; i < len/2; i++) { 
        if(str[i] != str[len-1-i]) 
            return false; 
    } 
    return true; 
} 
vector<ll>palindrome;
  
void generatePalindromes() { 
    // palindrome.push_back(0);
    for(ll i = 0; i < (1<<15); i++) { 
        if(isPalindrome(i)) 
            palindrome.push_back(i); 
    } 
} 
void solve(){
    ll n;cin>>n;
    vector<ll> a(n);ll sum=0;
    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        for(auto val:palindrome){
            ll x=(val^a[i]);
            if(mp.find(x)!=mp.end())sum+=mp[x];
        }
        mp[a[i]]++;
        sum++;
    }
    c(sum);
}
int main(){
    FAST;
    int t;cin>>t;
    generatePalindromes();
    while(t--){
        solve();
    }
    return 0;
}