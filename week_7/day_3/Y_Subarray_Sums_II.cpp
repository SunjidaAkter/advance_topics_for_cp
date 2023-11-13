#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(ll var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n];
    ll s;cin>>s;
    forl(i,0,n)cin>>a[i];
    map<ll,ll>mp1;
    ll sum1=0;
    ll cnt1=0;
    mp1[sum1]++;
    forl(i,0,n){
        sum1+=a[i];
        cnt1+=mp1[sum1-s];
        // cout<<mp1[sum1-s]<<" "<<sum1-s<<endl;
        mp1[sum1]++;
    }
    cout<<cnt1;
    return 0;
}