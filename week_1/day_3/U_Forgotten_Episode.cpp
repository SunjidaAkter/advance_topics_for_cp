#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n-1;i++)cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=1;i<=n;i++){
        if(v[i]!=i){
            cout<<i;
            break;
        }
    }
    return 0;
}