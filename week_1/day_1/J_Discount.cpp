#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    double a,b;cin>>a>>b;
    double ans=((a-b)*100)/a;
    cout<<fixed<<setprecision(20)<<ans;
    return 0;
}