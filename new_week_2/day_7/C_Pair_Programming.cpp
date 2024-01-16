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
    ll k,n,m;cin>>k>>n>>m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    ll i=0,j=0;
    vector<ll>ans;
    while(i<n||j<m){
        if(i<n&&j<m){
            if(a[i]==0){
                ans.push_back(a[i]);
                i++,k++;
            }else if(b[j]==0){
                ans.push_back(b[j]);
                j++,k++;
            }else{
                if(a[i]<b[j]&&a[i]<=k){
                    ans.push_back(a[i]);
                    i++;
                }else if(a[i]>=b[j]&&b[j]<=k){
                    ans.push_back(b[j]);
                    j++;
                }else{
                    cout<<-1<<nl;
                    return;
                }
            } 
        }else if(i<n){
            if(a[i]==0){
                ans.push_back(a[i]);
                i++,k++;
            }else {
                if(a[i]<=k){
                    ans.push_back(a[i]);
                    i++;
                }else{
                    cout<<-1<<nl;
                    return;
                }
            }
        }else if(j<m){
            if(b[j]==0){
                ans.push_back(b[j]);
                j++,k++;
            }else{
                if(b[j]<=k){
                    ans.push_back(b[j]);
                    j++;
                }else{
                    cout<<-1<<nl;
                    return;
                }
            }
        }
    }
    for(ll val:ans)cout<<val<<" ";
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