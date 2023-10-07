#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n,x;cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int s;cin>>s;
        if(s!=x){
            v.push_back(s);
        }
    }
    for(int val:v)cout<<val<<" ";
    return 0;
}