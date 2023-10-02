#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    ll sum=0,n,k;cin>>n>>k;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        if(x%k==0)sum++;
    }
    cout<<sum;
    return 0;
}