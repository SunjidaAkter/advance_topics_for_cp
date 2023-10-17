#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define Yes cout << "Yes" << nl
#define No cout << "No" << nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    ll sum=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='L')sum+=(i);
        if(s[i]=='R')sum+=(s.size()-(i+1));
    }
    vector<ll>v;
    ll i=0,j=n-1;
    while(i<j){
        if(s[i]=='L'){
            sum+=((s.size()-(i+1))-(i));
            v.push_back(sum);
        }    
        if(s[j]=='R'){
            sum+=(j-(s.size()-(j+1)));
            v.push_back(sum);
        }
        i++;j--;    
    }
    if(n==1)cout<<0<<nl;
    else {
        while(v.size()<n){
            v.push_back(sum);
        }
        for(ll val:v)cout<<val<<" ";
        cout<<nl;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}