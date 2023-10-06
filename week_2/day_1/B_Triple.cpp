#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        forl(i,0,n)cin>>a[i];
        map<int,int>mp;
        forl(i,0,n){
            mp[a[i]]++;
        }
        bool flag=false;
        forl(i,0,n){
            // cout<<mp[a[i]]<<" l ";
            if(mp[a[i]]>=3){
                cout<<a[i]<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)cout<<-1<<endl;
    }
    return 0;
}