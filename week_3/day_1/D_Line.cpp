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
    string s;cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L')sum+=(i);
        if(s[i]=='R')sum+=(s.size()-(i+1));
    }
    vector<int>v;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]=='L'){
            sum+=(s.size()-(i+1));
            v.push_back(sum);
        }
    }
    for(int i=(s.size()/2)+1;i<n;i++){
        if(s[i]=='R')v.push_back(sum+=(i));
        // else v.push_back(sum);
    }
    // int x=v[v.size()-1];
    cout<<v.size()<<"c";
    // while(v.size()<=n){
    //     v.push_back(x);
    // }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
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