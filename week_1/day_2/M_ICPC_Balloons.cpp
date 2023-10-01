#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        bool flag = false;
        int sum=0,fr[26]={0};
        for(int i=0;i<n;i++){
            fr[s[i]-'A']++;
            if(fr[s[i]-'A']==1)sum+=2;
            else sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}