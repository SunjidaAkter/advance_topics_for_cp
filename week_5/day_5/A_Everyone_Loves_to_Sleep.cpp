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
    int n,h,m;cin>>n>>h>>m;
    int sleepmin=h*60+m;
    int ans=24*60+1;
    while(n--){
        int hh,mm;cin>>hh>>mm;
        int alarmmin=hh*60+mm;
        if(alarmmin==sleepmin){
            ans=0;
        }else if(alarmmin<sleepmin){
            ans=min(ans,24*60-sleepmin+alarmmin);
        }else{
            ans=min(ans,alarmmin-sleepmin);
        }
    }
    cout<<ans/60<<" "<<ans%60<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}