#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        string s1="codeforces";
        string s;cin>>s;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i])sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}