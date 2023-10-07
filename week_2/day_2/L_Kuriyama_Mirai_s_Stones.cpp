#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    ll a[n];
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        v[i]=a[i];
    }
    sort(v.begin(),v.end());
    ll pref1[n];
    pref1[0]=a[0];
    for(int i=1;i<n;i++){
        pref1[i]=pref1[i-1]+a[i];
    }
    ll pref2[n];
    pref2[0]=v[0];
    for(int i=1;i<n;i++){
        pref2[i]=pref2[i-1]+v[i];
    }
    int t;cin>>t;
    while(t--){
        int x,y,z;cin>>x>>y>>z;
        ll sum1=0,sum2=0;
        if(x==1){
            cout<<pref1[z-1]-pref1[y-1]+a[y-1]<<endl;
        }else{
            cout<<pref2[z-1]-pref2[y-1]+v[y-1]<<endl;
            // for(ll i=y-1;i<z;i++)sum2+=v[i];
        }
        // if(x==1)cout<<sum1<<endl;
        // if(x==2)cout<<sum2<<endl;
    }
    return 0;
}