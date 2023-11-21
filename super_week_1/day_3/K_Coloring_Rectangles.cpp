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
     ll m,n,ans=0;cin>>m>>n;
     if(n==1||m==1){
          if(n==1){
               if(m%3==1){
                    if(m<8)ans=m/2;
                    else ans=2+(m-4)/3;
               }
               if(m%3==2)ans=(m/3)+1;
               if(m%3==0)ans=(m/3);
          }
          if(m==1){
               if(n%3==1){
                    if(n<8)ans=n/2;
                    else ans=2+(n-4)/3;
               }
               if(n%3==2)ans=(n/3)+1;
               if(n%3==0)ans=(n/3);
          }
     }else if(n>=m){
          ll first=3*(n/3)*m;
          ll first_tiles=first/3;
          ll second=3*(m/3)*(n%3);
          ll second_tiles=second/3;
          if(n%3==0||m%3==0){
               ans=first_tiles+second_tiles;
          }else if(n%3==1&&m%3==1){
               if(m<8)ans=first_tiles+m/2;
               else ans=first_tiles+2+(m-4)/3;  
          }else{
               ans=first_tiles+second_tiles+((n%3)*(m%3)/2);        
          } 
     }else{
          ll first=3*(m/3)*n;
          ll first_tiles=first/3;
          ll second=3*(n/3)*(m%3);
          ll second_tiles=second/3;
          if(n%3==0||m%3==0){
               ans=first_tiles+second_tiles;
          }else if(n%3==1&&m%3==1){
               if(n<8)ans=first_tiles+n/2;
               else ans=first_tiles+2+(n-4)/3;  
          }else{
               ans=first_tiles+second_tiles+((n%3)*(m%3)/2);        
          } 
     }
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