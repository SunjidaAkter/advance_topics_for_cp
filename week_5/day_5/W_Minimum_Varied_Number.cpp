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
    if(n<=9)cout<<n<<nl;
    else if(n>9&&n<18)cout<<n-9<<9<<nl;
    else if(n>17&&n<25)cout<<n-(8+9)<<8<<9<<nl;
    else if(n>24&&n<31)cout<<n-(7+8+9)<<7<<8<<9<<nl;
    else if(n>30&&n<36)cout<<n-(6+7+8+9)<<6<<7<<8<<9<<nl;
    else if(n>35&&n<40)cout<<n-(5+6+7+8+9)<<5<<6<<7<<8<<9<<nl;
    else if(n>39&&n<43)cout<<n-(4+5+6+7+8+9)<<4<<5<<6<<7<<8<<9<<nl;
    else if(n>42&&n<45)cout<<n-(3+4+5+6+7+8+9)<<3<<4<<5<<6<<7<<8<<9<<nl;
    else if(n==45)cout<<1<<2<<3<<4<<5<<6<<7<<8<<9<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}