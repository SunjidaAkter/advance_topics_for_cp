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
    string s1,s2;cin>>s1>>s2;
    if(s1.size()>s2.size())no;
    else{
        ll cnt1=0,cnt2=0,j=0;
        for(int i=0;i<s1.size();i++){
            char c=s1[i];
            cnt1=0,cnt2=0;
            while(i<s1.size()&&c==s1[i]){
                cnt1++;
                i++;
            }
            i--;
            while(j<s2.size()&&c==s2[j]){
                cnt2++;
                j++;
            }
            if(cnt1>cnt2){
                no;return;
            }
        }
        if(j<s2.size())no;
        else yes;
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