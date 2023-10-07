#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s1,s2;cin>>s1>>s2;
    int sum=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i])sum++;
    }
    cout<<sum;
    return 0;
}