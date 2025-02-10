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
    ll arr[n];
    string str="1";
    bool ok = false;
    for(ll i=0; i<n; i++)cin>>arr[i];
    vector<ll>taken;
    for(ll i=0; i<n; i++){
        if(taken.empty()){
            taken.push_back(arr[i]);
            // str+="1";
        }else if(ok){
            if(arr[i]<taken.back())str+="0";
            else{
                if(arr[i]<=taken[0]){
                    // ok=true;
                    taken.push_back(arr[i]);
                    str+="1";
                }else str+="0";
            }
        }else{
            if(arr[i]>=taken.back()){
                taken.push_back(arr[i]);
                str+="1";
            }else{
                if(arr[i]<=taken[0]){
                    ok=true;
                    taken.push_back(arr[i]);
                    str+="1";
                }else str+="0";
            }
        }

    }
    cout<<str<<nl;

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