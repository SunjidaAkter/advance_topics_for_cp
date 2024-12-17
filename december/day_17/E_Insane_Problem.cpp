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
    ll k,l1,r1,l2,r2;cin>>k>>l1>>r1>>l2>>r2;
    ll ans=0,s=0;
    
        ll tmp=l1,s1=0,s2=0,sum=0;
        while(tmp<l2){tmp*=k;s1++;}
        // cout<<s1<<" nl"<<nl;
        while(l2<=tmp&&tmp<=r2){
            // cout<<l1<<" "<<tmp<<" tmp"<<nl;
            ans++;
            tmp*=k;
            s2++;
        }
        ll x=s2;
        // cout<<s2<<" nl2"<<nl;
        // cout<<ans<<" nl ."<<nl;
        for(ll i=r1+1;i>=l1;i--){
            s2=x;
            // if(l2<=i*pow(k,s1-1)&&s1)ans++;
            // cout<<i<<" nn "<<i*pow(k,s1-1)<<nl;
            if(i*pow(k,s1+s2-1)<=r2){break;}
            while(i*pow(k,s1+s2-1)>r2){s2--;}
            // cout<<i*pow(k,s1+s2-1)<<" nl . "<<nl;
            ans+=s2;
            // cout<<s2<<" s2 "86;
            sum++;
        }
            cout<<sum<<" nl . "<<nl;
    ans+=((r1-l1+1)-sum)*x;
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