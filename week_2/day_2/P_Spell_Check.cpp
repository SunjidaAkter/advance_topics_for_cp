#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    set<char>st;
    vector<char>st1;
    st.insert('T');
    st.insert('i');
    st.insert('m');
    st.insert('u');
    st.insert('r');
    for(int i=0;i<n;i++){
        st1.push_back(s[i]);
    }
    sort(st1.begin(),st1.end());
    bool flag=true;
    if(st.size()!=st1.size())flag=false;
    while(!st1.empty()){
        // cout<<*st1.begin()<<" "<<*st.begin();
        if(*st.begin()!=*st1.begin()){
            flag=false;
            break;
        }
        st1.erase(st1.begin());
        st.erase(st.begin());
    }
    if(flag)yes;
    else no;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}