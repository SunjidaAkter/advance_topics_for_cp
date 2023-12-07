#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(n==2){
        cout<<1<<" "<<a[1]-a[0];
    }else{
        ll sum=0;
        ll mn=(a[n-1]-a[0]);
        for(ll i=0;i<n;i++){
            sum+=abs(a[i]-a[n-1]);
            mn=__gcd(mn,a[n-1]-a[i]);
        }    
        cout<<sum/mn<<" "<<mn;
    }
    return 0;
}