#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
vector<int>v;
void prime(){
    v.push_back(2);
    int sum;
    for(int i=3;i<=1000;i+=2){
        sum=0;
        for(int j=1;j<=i/2;j++){
            if(i%j==0)sum++;
        }
        if(sum==1)v.push_back(i);
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=2;j<=a[i];j++){
            // cout<<a[i]<<" "<<j<<" l ";
            if(a[i]%j==0)mp[j]++;
        }
    }
    int ans,mx=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        // cout<<it->first<<" ";
        if(mx<it->second){
            mx=it->second;
            ans=it->first;
        }
    }
    cout<<ans;
    return 0;
}