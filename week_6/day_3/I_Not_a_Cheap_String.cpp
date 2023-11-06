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
typedef pair<char,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    string s;cin>>s;
    int n;cin>>n;
    vector<pii>v;
    int sum=0;
    for(int i=0;i<s.size();i++){
        v.push_back({s[i],i});
        sum+=(s[i]-96);
    }
    sort(v.begin(),v.end());
    int x=s.size()-1;
    while(sum>n){
        sum-=(v[x].first-96);
        v.erase(v.begin()+x);
        x--;
        if(sum<0)continue;
        if(x<0)break;
    }
    sort(v.begin(), v.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });
    if(v.empty())cout<<""<<nl;
    else{
        for(int i=0;i<v.size();i++){
            cout<<v[i].first;
        }
        cout<<nl;
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