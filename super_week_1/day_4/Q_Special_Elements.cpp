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
    int a[n],cnt=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int k=0;k<n;k++){
        int s=a[k];
        int i=0,j=0,sum=0,mx=0;
        while(j<n){
            sum+=a[j];
            while(sum>s){
                sum-=a[i];
                i++;
            }
            if(sum==s){
                mx=max(mx,j-i+1);
            }
            if(mx>1){cnt++;break;}
            j++;
        }
    }
    cout<<cnt<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}