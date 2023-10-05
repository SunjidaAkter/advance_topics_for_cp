#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s;cin>>s;
    vector<int>v;
    for(int i=0;i<s.size();i+=2)v.push_back(s[i]-'0');
    // for(int i=0;i<s.size();i++)cout<<v[i]<<" ";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1];
    return 0;
}