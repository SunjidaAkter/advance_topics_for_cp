#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    string s;cin>>s;
    int fr[26]={0};
    for(int i=0;i<s.size();i++){
        fr[s[i]-'a']++;
    }
    bool flag=true;
    for(int i=0;i<26;i++){
        if(fr[i]==0){
            char x=i+'a';
            cout<<x;
            flag=false;
            break;
        }
    }
    if(flag)cout<<"None";
    return 0;
}