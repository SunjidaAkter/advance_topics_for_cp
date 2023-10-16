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
    char c,s;cin>>c>>s;
    string ans="";
    ans+=c;
    ans+=s;
    set<string>st;
    st.insert(ans);
    for(int i=2;i<n;i++){
        ans[0]=ans[1];
        char d;cin>>d;
        ans[1]=d;
        st.insert(ans);
    }
    cout<<st.size()<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}