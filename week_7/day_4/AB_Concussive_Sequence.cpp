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
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(all(a));
    int l,r;
    if(n&1){
        l=(n/2);
        r=l+1;
    }else{
        l=(n/2)-1;
        r=l+1;
    }
    vector<int>ans(n);
    int idx=0;
    for(int i=0;i<=l;i++){
        ans[idx]=a[i];
        idx+=2;
    }
    idx=1;
    for(int i=r;i<n;i++){
        ans[idx]=a[i];
        idx+=2;
    }
    bool ok=1;
    for(int i=1;i<n-1;i++){
        if(((ans[i-1]>ans[i])&&(ans[i]<ans[i+1]))||((ans[i-1]<ans[i])&&(ans[i]>ans[i+1])))continue;
        else {ok=0;break;}
    }
    if(ok){for(int val:ans)cout<<val<<" ";cout<<nl;}
    else{
        l=(n/2)-1;
        r=l+1;
        vector<int>res(n);
        idx=1;
        for(int i=0;i<=l;i++){
            res[idx]=a[i];
            idx+=2;
        }
        idx=0;
        for(int i=r;i<n;i++){
            res[idx]=a[i];
            idx+=2;
        }
        ok=1;
        for(int i=1;i<n-1;i++){
            if(((res[i-1]>res[i])&&(res[i]<res[i+1]))||((res[i-1]<res[i])&&(res[i]>res[i+1])))continue;
            else {ok=0;break;}
        }
        if(ok){for(int val:res)cout<<val<<" ";cout<<nl;}
        else cout<<-1<<nl;
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