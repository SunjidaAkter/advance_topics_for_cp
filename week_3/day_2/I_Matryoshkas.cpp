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
    vector<int>v(n);
    map<int,int>mp;
    int mx=0,dif=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    sort(v.begin(),v.end());
    mx=mp[v[0]];
    for(int i=1;i<n;i++){
        if(v[i-1]==v[i])mx=max(mx,mp[v[i]]);
        else if(abs(v[i]-v[i-1])==1){
            if(mp[v[i-1]]<=mp[v[i]])mx=max(mx,mp[v[i]]);
            else{
                dif+=(mp[v[i-1]]-mp[v[i]]);
                mx=mp[v[i]];
            }
        }else{
            dif+=mx;
            mx=mp[v[i]];
        }
    }
    dif+=mx;
    cout<<dif<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}