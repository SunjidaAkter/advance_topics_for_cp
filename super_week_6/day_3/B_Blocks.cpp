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
    ll n;cin>>n;
    string s;cin>>s;
    ll w=0,b=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='W')w++;
        if(s[i]=='B')b++;
    }
    if(b==0||w==0)cout<<0<<nl;
    else if((b%2==1&&w%2==1))cout<<-1<<nl;
    else{
        vector<ll>v;
        if(w<=b){
            for(ll i=0;i<n-1;i++){
                if(s[i]=='B'){
                    s[i]='W';
                    v.push_back(i+1);
                    if(s[i+1]=='W')s[i+1]='B';
                    else s[i+1]='W';
                }
            }
            for(ll i=0;i<n-1;i++){
                if(s[i]=='B'){
                    s[i]='W';
                    v.push_back(i+1);
                    if(s[i+1]=='W')s[i+1]='B';
                    else s[i+1]='W';
                }
            }
            if(s.back()=='B'){
                for(ll i=0;i<n-1;i++){
                    if(s[i]=='W'){
                        s[i]='B';
                        v.push_back(i+1);
                        if(s[i+1]=='W')s[i+1]='B';
                        else s[i+1]='W';
                    }
                }

            }
            cout<<v.size()<<nl;
            for(ll val:v)cout<<val<<" ";
            cout<<nl;
            
        }else{
            for(ll i=0;i<n-1;i++){
                if(s[i]=='W'){
                    s[i]='B';
                    v.push_back(i+1);
                    if(s[i+1]=='W')s[i+1]='B';
                    else s[i+1]='W';
                }
            }
            for(ll i=0;i<n-1;i++){
                if(s[i]=='W'){
                    s[i]='B';
                    v.push_back(i+1);
                    if(s[i+1]=='W')s[i+1]='B';
                    else s[i+1]='W';
                }
            }
            if(s.back()=='W'){
                for(ll i=0;i<n-1;i++){
                    if(s[i]=='B'){
                        s[i]='W';
                        v.push_back(i+1);
                        if(s[i+1]=='W')s[i+1]='B';
                        else s[i+1]='W';
                    }
                }

            }
            cout<<v.size()<<nl;
            for(ll val:v)cout<<val<<" ";
            cout<<nl;
            // cout<<s<<"here";

        }
    }
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}