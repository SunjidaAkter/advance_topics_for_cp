#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long int
int main(){
    ll sum=0,n,k;cin>>n>>k;
    while(n<=k){
        sum++;
        n*=2;
    }
    cout<<sum;
    return 0;
}