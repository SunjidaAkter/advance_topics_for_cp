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
typedef pair<char,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    string s;cin>>s;
    int n=s.size();
    vector<pii>v;
    char a,b;
    if(s[0]>s[n-1]){a=s[n-1];b=s[0];}
    if(s[0]<s[n-1]){a=s[0];b=s[n-1];}
    for(int i=0;i<n;i++){
        if(s[i]>=a&&s[i]<=b)v.push_back({s[i],i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)cout<<v[i].first<<" ";
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