#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define Yes cout << "Yes" << nl
#define No cout << "No" << nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
bool cmp1(pii a,pii b){
    return (a.first<b.first);
}
bool cmp2(pii a,pii b){
    return (a.second<b.second);
}
void solve(){
    int n,k;cin>>n>>k;
    vector<pii> a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back({x,i+1});
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        b.push_back({x,i+1});
    }
    sort(a.begin(),a.end(),cmp1);
    sort(b.begin(),b.end(),cmp1);
    for(int i=0;i<n;i++){
        b[i].second=a[i].second;
    }
    sort(b.begin(),b.end(),cmp2);
    for(auto val:b)cout<<val.first<<" ";
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