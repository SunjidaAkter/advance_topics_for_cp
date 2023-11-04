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
    int a[n],b[n];
    int x;bool flag=true;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    if(n==1&&a[0]<b[0])no;
    else if(n==1&&a[0]>=b[0])yes;
    else{
        for(int i=0;i<n;i++){
            if(b[i]!=0){x=a[i]-b[i];break;}
        }
        for(int i=0;i<n;i++){
            if(a[i]-b[i]!=x||a[i]<b[i]){
                if(b[i]!=0){flag=false;break;}
                else{
                    if(a[i]-b[i]>x){flag=false;break;}
                }
            }
        }
        if(flag)yes;
        else no;
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