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
    ll n,k,x;cin>>n>>k>>x;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    ll sum=0;
    for(int i=0;i<n;i++)sum+=a[i];
    if(sum*k==x){
        cout<<1<<nl;
        return;
    }else if(sum>x){
        ll sum=0,i=n-1;
        while(sum<x){
            sum+=a[i--];
        }
        cout<<(n*k)-(n-(i+2))<<nl;
        return;
    }else if(sum*k<x){
        cout<<0<<nl;
    }else{
        ll y=x%sum;
        ll s=0,i=n-1;
        while(s<y){
            s+=a[i--];
        }
        ll ans=(k*n)-((x/sum)*n)-(n-(i+2));
        cout<<max((ll)0,ans)<<nl;
    }
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