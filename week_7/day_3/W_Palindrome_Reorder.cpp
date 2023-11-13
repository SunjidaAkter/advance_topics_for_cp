#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s;cin>>s;
    int fr[26]={0};
    for(char c:s){
        fr[c-'A']++;
        // cout<<c-'A'<<" ";
    }
    vector<char>v;
    vector<char>v1;
    // for(int i=0;i<s.size();i++)cout<<fr[i]<<endl;
    int odd=0;
    for(char c:s){
        if(fr[c-'A']%2==0){
            if(fr[c-'A']==0)continue;
            else{
                v.push_back(c);
                fr[c-'A']-=2;
            }    
        }
        else {
            v1.push_back(c);
        }
    }
    for(int i='A';i<='Z';i++)if(fr[i-'A']%2)odd++;
    if(odd>1)cout<<"NO SOLUTION";
    else{
        if(!v.empty()){
            sort(v.begin(),v.end());
            for(char c:v)cout<<c;
            if(!v1.empty())for(char c:v1)cout<<c;
            reverse(v.begin(),v.end());
            for(char c:v)cout<<c;
        }else{
            if(!v1.empty())for(char c:v1)cout<<c;
        }
    }
    return 0;
}