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
    string s1,s2;cin>>s1>>s2;
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(s1[i]!=s2[i])sum+=2;
        else{
            if(s1[i]=='1'&&i!=n-1){
                if(s1[i+1]=='0'&&s2[i+1]=='0')sum+=2,i++;
                else continue;
            }else if(s1[i]=='1')continue;
            else if(s1[i]=='0'&&i!=n-1){
                if(s1[i+1]=='1'&&s2[i+1]=='1')sum+=2,i++;
                else sum++;
            }else if(s1[i]=='0')sum++;
        }
    }
    cout<<sum<<nl;
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