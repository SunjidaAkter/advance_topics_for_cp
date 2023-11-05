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
    int a[n],sum=0,s1=0;bool flag=false;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=n-2;i>=0;i--){
        if(a[i]>=a[i+1]){
            while(a[i]>=a[i+1]){
                a[i]/=2;
                sum++;
                if(a[i]<=0){
                    s1++;
                    break;
                }
            }
        }
    }
    if(s1>1)c(-1);
    else if(s1==1){
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){flag=true;break;}
        }
        if(flag)c(-1);
        else c(sum);
    }
    else c(sum);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}