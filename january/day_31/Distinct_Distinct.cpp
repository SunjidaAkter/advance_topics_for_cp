#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
vector<ll> getdiv(ll n){
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans.push_back(i);
            if (n / i != i){
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}
int main(){
    ll n;cin>>n;
    vector<ll> ans=getdiv(n);
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    return 0;
}