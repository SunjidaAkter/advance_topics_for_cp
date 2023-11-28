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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    vector<int> mn(n),mx(n);
    vector<int>li;
    int j=n-1;
    for(int i=n-1;i>=0;i--){
        while(j>=0&&a[i]<=b[j]){
            li.push_back(b[j]);
            j--;
        }
        int x=li.front()-a[i];
        int y=li.back()-a[i];
        mn[i]=min(x,y);
        mx[i]=max(x,y);
        int a_u=n-i;
        int b_u=n-(j+1);
        if(a_u==b_u)li.clear();
    }
    for(int val:mn)cout<<val<<" ";
    cout<<nl;
    for(int val:mx)cout<<val<<" ";
    cout<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}