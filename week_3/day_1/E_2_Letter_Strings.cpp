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
void solve(){
    int n;cin>>n;
    vector<string>v;
    map<char,int>ap;
    map<char,int>bp;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string x;cin>>x;
        v.push_back(x);
        ap[x[0]]++;
        bp[x[1]]++;
        mp[x]++;
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        if(ap[v[i][0]]>1||bp[v[i][1]]>1){
            sum+=((ap[v[i][0]]-1)+(bp[v[i][1]]-1));
            sum-=(mp[v[i]]-1)*2;
            ap[v[i][0]]--;
            bp[v[i][1]]--;
            mp[v[i]]--;
        }
    }
    cout<<sum<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}