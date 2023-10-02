#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;cin>>n;
    ll sum=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int odd;
    for(int i=0;i<n;i++){
        if(v[i]%2){
            odd=v[i];
            break;
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    if(sum%2==0)
    cout<<sum;
    else cout<<sum-odd;
    return 0;
}