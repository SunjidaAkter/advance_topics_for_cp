#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
ll x;
void search(ll l,ll r,ll a[],ll n){
    ll f=0;

    if(l<=r){
        ll m=((r+l)/2);
        for(ll i=0;i<n-1;i++){
            if(abs(a[i]-m)>abs(a[i+1]-m)){
                if(a[i]>a[i+1])f=1;
                else f=2;
                break;
            }
        }
        if(f==1)search(m+1,r,a,n);
        else if(f==2)search(l,m-1,a,n);
        else x=m;
    }
}
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    x=-1;
    search(0,1000000000,a,n);
    cout<<x<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
// Code :

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long 
// ll x;
// void bs(ll l, ll h, ll a[], ll n)
// {
//     ll i, f=0;
//     if(l<=h){
//         ll m=(l+h)/2;
        
//         for(i=0; i<n-1; i++)
//         {
//             if((abs(a[i]-m)>abs(a[i+1]-m))){
//                 if(a[i]>a[i+1]){
//                     f=1;
//                 }else{
//                     f=2;
//                 }
//                 break;
//             }
//         }
        
//         if(f==1)
//         bs(m+1, h, a, n);
//         else if(f==2)
//         bs(l, m-1, a, n);
//         else
//         x=m;
//     }
// }
// int main()
// {
//     ll t, n, i, j, f;
    
//     cin>>t;
    
//     for(;t--;)
//     {
//         cin>>n;
//         ll a[n];
        
//         for(i=0; i<n; i++){
//             cin>>a[i];
//         }
        
//         x=-1;
        
//         bs(0, 1000000000, a, n);
        
//         cout<<x<<"\n";
//     }
    
// }