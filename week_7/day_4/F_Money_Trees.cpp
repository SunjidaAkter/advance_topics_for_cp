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
    int s;cin>>s;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int i=0,j=0,sum=0,mx=0;
    
    while(j<n){
        sum+=a[j];
        while(i<=j&&sum>s){
            sum-=a[i];
            i++;
        }
        if(j>0){
            if(i<j&&(b[j-1]%b[j])!=0){
                i=j;
                sum=a[j];
            }
        }
        mx=max(mx,j-i+1);
        j++;
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
