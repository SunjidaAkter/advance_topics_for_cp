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
    int n,b;cin>>n>>b;
    int a[n];vector<int>v;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if((b&a[i])==b)v.push_back(a[i]);
    }
    // cout<<b<<" "<<(b&a[1])<<endl;
    int sum=-1;
    if(v.size()==0)no;
    else if(v.size()==1){if(b&v[0]==b)yes;else no;}
    else{
        for(int i=0;i<v.size();i++){
            sum&=v[i];
        }
        if(sum==b)yes;
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