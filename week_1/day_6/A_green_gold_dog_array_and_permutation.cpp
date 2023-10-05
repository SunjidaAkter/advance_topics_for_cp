#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
void solve(){
    ll n;cin>>n;
    ll a[n];
    vector<ll>v;
    forl(i,0,n)cin>>a[i];
    ll ans;
    forl(i,0,n){
        v.pub(i+1);
    }
    // v.erase(v.begin()+3-1);
    // forl(i,0,v.size()){
    //     cout<<a[i]<<" l ";
    // }
    forl(i,0,n){
        ll j=0,mx=-1;
        // cout<<v[i]<<" l ";
        while(j<v.size()){
            // cout<<j;
    //         // j++;
            if(mx<abs(v[j]-a[i])){
                mx=abs(v[j]-a[i]);
                ans=v[j];
            }

            j++;
        }
        v.erase(v.begin()+ans-1);
        cout<<ans<<" ";
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}