#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s;cin>>s;
    int sum=0;
    while(s.size()>1){
        int sum1=0;
        for(int i=0;i<s.size();i++){
            sum1+=(s[i]-'0');
        }
        s=to_string(sum1);
        // cout<<s<<" l ";
        sum++;
    }
    cout<<sum;
    return 0;
}