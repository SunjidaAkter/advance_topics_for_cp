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
bool cmp(pii a,pii b){
    if(a.first<b.second){return true;}
    else if(a.first>b.second)return false;
    else if(a.first==b.second){
        if(a.second<b.second)return true;
        else return false;
    }
}
void solve(){
    string s;cin>>s;
    int n=s.size();
    vector<pii>v;
    char a,b;bool ok=false;
    if(s[0]>s[n-1]){a=s[n-1];b=s[0];ok=true;}
    if(s[0]<s[n-1]){a=s[0];b=s[n-1];}
    if(s[0]==s[n-1]){a=s[0];b=s[n-1];}
    //*instead
    for(int i=0;i<n;i++){
        if(s[i]>=a&&s[i]<=b)v.push_back({s[i],i+1});
    }
    sort(v.begin(),v.end());
    if(ok)reverse(v.begin(),v.end());
    ll sum=0;
    for(int i=1;i<v.size();i++){
        sum+=abs((v[i].first-96)-(v[i-1].first-96));
    }
    cout<<sum<<" "<<v.size()<<nl;
    cout<<1<<" ";
    for(int i=0;i<(v.size());i++){
        if(v[i].second!=1&&v[i].second!=n)cout<<v[i].second<<" ";
    }
    cout<<n;
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