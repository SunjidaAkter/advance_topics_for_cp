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
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(all(a));
    reverse(all(a));
    set<int>st;
    vector<int>v1,v2;
    if(n&1){
        for(int i=0;i<(n/2);i++){
            v1.push_back(a[i]);
            st.insert(a[i]);
        }
        for(int i=n/2;i<n;i++){
            v2.push_back(a[i]);
            st.insert(a[i]);
        }
    }else{
        for(int i=0;i<=(n/2);i++){
            v1.push_back(a[i]);
            st.insert(a[i]);
        }
        for(int i=(n/2)+1;i<n;i++){
            v2.push_back(a[i]);
            st.insert(a[i]);
        }
    }
    if(st.size()==1)c(-1);
    else{
        bool f=1;
        vector<int>ans;
        sort(all(v2));
        for(int i=0;i<n/2;i++){
            if(v1[i]==v2[i])f=0;
            ans.push_back(v2[i]);
            ans.push_back(v1[i]);
            // cout<<v1[i]<<" ";
        }
        if(v2.size()&1)ans.push_back(v2[v2.size()-1]);
        if(!f||(ans[ans.size()-2]==v2[v2.size()-1]))c(-1);
        else{
            for(int val:ans)cout<<val<<" ";
        }
        cout<<nl;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}