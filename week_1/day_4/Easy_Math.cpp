#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int idxSum(int x){
    int sum=0,tmp;
    while(x!=0){
        tmp=x%10;
        sum+=tmp;
        x/=10;
    }
    return sum;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int mx=INT_MIN;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int prod=a[i]*a[j];
                int x=idxSum(prod);
                mx=max(mx,x);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}