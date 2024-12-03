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
    string s1,s2;cin>>s1>>s2;
    ll sum=0,x=0;
    for(int i=0;i<min(s1.size(),s2.size());i++){
        if(s1[i]==s2[i])sum++,x=-1;
        else{
            x=i;
            break;
        }
    }
    if(x==-1)sum+=(s1.size()+s2.size()-2*min(s1.size(),s2.size()))+1;
    else sum+=(s1.size()+s2.size()-2*x)+1;
    if(x==0)sum--;
    cout<<sum<<endl;
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