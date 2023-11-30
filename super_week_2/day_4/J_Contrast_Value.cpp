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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) cin >> a[i];
    int x = unique(a.begin(), a.end()) - a.begin();
    int ans = x;
    for (int i=1;i<x-1;i++) {
      if(a[i-1]<a[i]&&a[i]<a[i+1])ans--;
      if(a[i-1]>a[i]&&a[i]>a[i+1])ans--;
    }
    c(ans);
}

int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}