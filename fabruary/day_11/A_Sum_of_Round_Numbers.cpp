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
    ll n=s.size();
    ll sum=0;vector<string>v;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='0')continue; 
        else{
            sum++;
            string s1;
            s1+=s[i];
            // cout<<s1<<" j ";
            for(ll j=0;j<(n-i-1);j++){
                s1+="0";
            }
            v.push_back(s1);
        }
    }
    cout<<sum<<endl;
    for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
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