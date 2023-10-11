#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool cmp(string a,string b){
    if(a.size()==b.size())return a<b;
    else return a.size()<b.size();
}
bool isSubstring(string a,string b){
    return (b.find(a)!=string::npos);
}
int main(){
    int n;cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    bool flag=true;
    for(int i=1;i<n;i++){
        if(!isSubstring(v[i-1],v[i])){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)cout<<v[i]<<endl;
    }else cout<<"NO";
    return 0;
}
