#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    ll a[n];
    map<ll,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    map<int, int>::iterator it;
    for(auto it=mp.begin();it!=mp.end();it++){
        if((*it).second==1){
            cout<<(*it).first;
            break;
        }
    }

    return 0;
}