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
    int a[n],mx=0;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int k=2;k<=100;k++){
        int i=0,j=n-1,cnt=0;
        while(i<j){
            if((a[i]+a[j])==k){
                i++,j--,cnt++;
            }else if((a[i]+a[j])>k)j--;
            else i++;
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}