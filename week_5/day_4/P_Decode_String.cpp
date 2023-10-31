#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    stack<string>st;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            string sub=s.substr(i-2,3);
            st.push(sub);
            i=i-2;
        }else {
            string sub=s.substr(i,1);
            st.push(sub);
        }
    }
    while(!st.empty()){
        if(st.top().size()>1){
            char x=96+stoi(st.top().substr(0,2));
            cout<<x;
            st.pop();
        }else{
            char x=96+stoi(st.top());
            cout<<x;
            st.pop();
        }
    }
    
    cout<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}