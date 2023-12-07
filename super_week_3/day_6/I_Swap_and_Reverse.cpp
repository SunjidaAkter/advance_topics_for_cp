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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(k&1){
        vector<char>odd,even,ans(n);
        for(int i=0;i<n;i+=2)even.push_back(s[i]);
        for(int i=1;i<n;i+=2)odd.push_back(s[i]);
        sort(all(odd));
        sort(all(even));
        for(int i=0,j=0;i<n;j++,i+=2)ans[i]=even[j];
        for(int i=1,j=0;i<n;j++,i+=2)ans[i]=odd[j];
        for(char val:ans)cout<<val;
        cout<<nl;
    }else{
        sort(all(s));
        cout<<s<<nl;
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