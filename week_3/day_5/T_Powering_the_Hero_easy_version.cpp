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
    int a[n];
    vector<int>v;
    ll mx=0,sum=0;
    vector<ll>st;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        st.push_back(a[i]);
        sort(st.begin(),st.end());
        if(a[i]==0&&a[i+1]==0){
            sum+=(st[st.size()-1]);
            st.pop_back();
        }
        if(a[i]==0&&a[i+1]!=0){
            sum+=(st[st.size()-1]);
            st.clear();
        }
    }
    if(a[n-1]==0&&st.empty())sum+=0;
    else if(a[n-1]==0&&!st.empty())sum+=st[st.size()-1];
    c(sum);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}