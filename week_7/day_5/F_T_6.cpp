#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool prime(int a){
    if (a == 1 || a == 0)
        return false;
    for (int i=2; i*i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}
vector<ll> getdiv(ll n){
    vector<ll> ans;
    ll cnt=0;
    for (ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans.push_back(i);
            // cnt++;
            if (n / i != i){
                ans.push_back(n / i);
                // cnt++;
            }
            // if(cnt==k)break;
        }
    }
    return ans;
}
int main(){
    ll n,k;cin>>n>>k;
    vector<ll>div=getdiv(n);
    if(div.size()<k)cout<<-1<<'\n';
    else {
        sort(div.begin(),div.end());
        cout<<div[k-1]<<'\n';
    }   
    return 0;
}