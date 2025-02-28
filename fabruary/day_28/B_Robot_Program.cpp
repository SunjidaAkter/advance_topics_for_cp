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
    ll n,p,k;cin>>n>>p>>k;
    bool v=false;
    string s;cin>>s;
    ll c=0;
 
    for(int i=0;i<n&&k!=0;++i){
        k--;
        if(s[i]=='L')p--;
        else p++;
        if(p==0){
            c++;
            v=true;
            break;
        }
    }
    ll j=0;
    if(k>0&&v){
        for(int i=0;i<n;++i){
            k--,j++;
            if(s[i]=='L')p--;
            else p++;
            if(p==0){
                c++;
                c+=(k/j);
                break;
            }
            if(k==0)break;
        }
    }
    cout <<c<< endl;
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