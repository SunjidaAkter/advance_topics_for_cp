#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> v(n);
        forl(i,0,n)cin>>v[i];
        sort(v.begin(),v.end());
        ll sum=0;
        forl(i,0,n){
            sum+=abs(v[0]-v[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}