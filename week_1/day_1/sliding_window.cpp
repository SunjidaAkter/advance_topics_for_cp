#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int mx=INT_MIN;
    int k;cin>>k;
    int i=0,j=0,s=0;
    while(j<n){
        s+=a[j];
        if(j>=k-1){
            mx=max(mx,s);
            s-=a[i];
            i++;
        }
        j++;
    }
    cout<<mx;
    return 0;
}