#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll l,r;cin>>l>>r;
    cout<<"YES"<<'\n';
    int n=((r-l+1)/2);
    // cout<<n<<"h";
    for(int i=1;i<=n;i++){
        cout<<l<<" "<<l+1<<'\n';
        l+=2;
    }
    return 0;
}