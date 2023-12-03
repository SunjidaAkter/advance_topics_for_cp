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
    int fr[26]={0};
    for(int i=0;i<n;i++){
        fr[s[i]-97]++;
    }
    int pairs=0,single=0;
    for(int i=0;i<26;i++){
        pairs+=(fr[i]/2);
        single+=(fr[i]%2);
    }
    int ans=0;
    ans+=((pairs/k)*2);
    single+=((pairs%k)*2);
    if(single>=k)ans++;
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}