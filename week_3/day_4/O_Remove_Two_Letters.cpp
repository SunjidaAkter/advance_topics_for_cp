#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define Yes cout << "Yes" << nl
#define No cout << "No" << nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    unordered_set<string>st;
    st.insert(s.substr(2,n-2));
        // cout<<*st.begin()<<nl;
    for(int i=0;i<n-2;i++){
        string str="";
        str+=s.substr(0,i+1);
        // cout<<str<<" ";
        str+=s.substr(i+3);
        // cout<<s.substr(i+3)<<" ";
        st.insert(str);
    }
    cout<<st.size()<<nl;
    // while(!st.empty()){
    //     st.erase(st.begin());
    // }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}