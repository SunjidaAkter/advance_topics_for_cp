#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    vector<string>v;
    vector<char>ans;
    set<string>st;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(st.find(v[i])==st.end()){
            st.insert(v[i]);
            ans.push_back(v[i][v[i].size()-2]);
            ans.push_back(v[i][v[i].size()-1]);
        }
    }
    for(int i=0;i<ans.size();i++)cout<<ans[i];
    cout<<endl;
    return 0;
}