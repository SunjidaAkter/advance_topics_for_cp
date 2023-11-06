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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int cnt=0,mx=0,ans=0,x,y;bool ok=false;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            cnt++;
        }
        if(s[i]=='W'){
            if(mx<cnt){
                mx=cnt;
                x=i-cnt+1;
                y=(n-1)-x+1;
            }
            cnt=0;
        }
    }
    if(mx<cnt){
        mx=cnt;
        x=n-1-cnt+1;
        y=(n-1)-x+1;
    }
    if(s=="W"&&k==1)cout<<1<<nl;
    else if(mx>=k)cout<<0<<nl;
    else{
        cnt=0;
        if(y>=k){
            for(int i=x;i<n;i++){
                if(s[i]=='B'){
                    cnt++;
                }else{
                    if(cnt<k){
                        s[i]='B';
                        ans++;cnt++;
                    }else break;
                }
            }
            c(ans);
        }else{
            for(int i=x;i>=0;i--){
                if(s[i]=='B'){
                    cnt++;
                }else{
                    if(cnt<k){
                        s[i]='B';
                        ans++;cnt++;
                    }else break;
                }
            }
            c(ans);
        }
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