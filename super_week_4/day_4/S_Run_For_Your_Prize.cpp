#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n];
    ll mx=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        mx=max(mx,min(a[i]-1,1000000-a[i]));
    }
    cout<<mx;
    return 0;
}