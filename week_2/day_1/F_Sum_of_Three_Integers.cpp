#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int b,k;cin>>b>>k;
    int n=b+1;
    int a[n];
    for(int i=0;i<n;i++)a[i]=i;
    int s=k;
    int dp[n+1][s+1];
    dp[0][0]=1;
    for(int i=1;i<=s;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(a[i-1]<=j){
                dp[i][j]=dp[i][j-a[i-1]]+dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[n][s];
    return 0;
}