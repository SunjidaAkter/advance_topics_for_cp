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
    
    string s;cin >> s;
    ll n = s.size();
    vector<ll>cnt;
    ll i=0,j=n-1;
    while(i <= j){
        if(s[i] >= s[j]){
            cnt.push_back(s[i] - 'a');
            i++;
        } else {
            cnt.push_back(s[j]-'a');
            j--;
        }
    } 
    reverse(all(cnt));
    for(ll i=0;i<n;i++){
        if(cnt[i] != i){
            cout << "NO" << nl;
            return;
        }
    }
    yes;
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