#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s;cin>>s;
    string t=s;
    reverse(t.begin(),t.end());
    if(s==t)cout<<0<<'\n';
    else{
        cout<<3<<'\n';
        cout<<"R"<<" "<<s.size()-1<<'\n';
        cout<<"L"<<" "<<s.size()<<'\n';
        cout<<"L"<<" "<<2<<'\n';
    }
    return 0;
}