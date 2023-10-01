#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    ll s,t,sum=0;cin>>s>>t;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            for(int k=0;k<=100;k++){
                if(i+j+k<=s&&i*j*k<=t)sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}