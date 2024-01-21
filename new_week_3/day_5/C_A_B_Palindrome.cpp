#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll a,b;cin>>a>>b;
    string s;cin>>s;
    ll n=a+b,c=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0')a--;
        if(s[i]=='1')b--;
        if(s[i]=='?')c++;
    }
    if(c==0){
        for(ll i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                cout<<-1<<nl;
                return;
            }
        }
        if(a>0||b>0){
            cout<<-1<<nl;
            return;
        }
        cout<<s<<nl;
        return;
    }
    for(ll i=0;i<n/2;i++){
        if(s[i]=='?'&&s[n-i-1]!='?'){
            if(s[n-i-1]=='0'&&a>0){
                s[i]='0';
                a--;
            }else if(s[n-i-1]=='0'&&a==0){
                cout<<-1<<nl;
                return;
            }else if(s[n-i-1]=='1'&&b>0){
                s[i]='1';
                b--;
            }else if(s[n-i-1]=='1'&&b==0){
                cout<<-1<<nl;
                return;
            }
        }else if(s[i]!='?'&&s[n-i-1]=='?'){
            if(s[i]=='0'&&a>0){
                s[n-1-i]='0';
                a--;
            }else if(s[i]=='0'&&a==0){
                cout<<-1<<nl;
                return;
            }else if(s[i]=='1'&&b>0){
                s[n-i-1]='1';
                b--;
            }else if(s[i]=='1'&&b==0){
                cout<<-1<<nl;
                return;
            }
        }
    }
    for(ll i=0;i<n/2;i++){
        if(s[i]=='?'&&s[n-i-1]=='?'){
            if(a-2>=0)s[i]='0',s[n-i-1]='0',a-=2;
            else if(b-2>=0)s[i]='1',s[n-i-1]='1',b-=2;
            else{
                cout<<-1<<nl;
                return;
            }
        }
    }
    if(n%2==1&&s[n/2]=='?'){
        if(a>0)s[n/2]='0',a--;
        else if(b>0)s[n/2]='1',b--;
        else{
            cout<<-1<<nl;
            return;
        }
    }
    if(a>0||b>0){
        cout<<-1<<nl;
        return;
    }
    for(ll i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            cout<<-1<<nl;
            return;
        }
    }
    cout<<s<<nl;
    return;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}