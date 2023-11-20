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
    int ans=1e7,fr[26]={0};
    for(int i=0;i<n;i++)fr[s[i]-'a']++;
    for(char i='a';i<='z';i++){
        if(fr[i-'a']){
            int l=0,r=n-1,cnt=0;
            while(l<=r){
                if(s[l]==s[r]){l++,r--;}
                else if(s[l]==i){l++,cnt++;}
                else if(s[r]==i){r--,cnt++;}
                else {cnt=1e7;break;}
            }
            ans=min(ans,cnt);
        }
    }
    if(ans==1e7)cout<<-1<<nl;
    else cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}