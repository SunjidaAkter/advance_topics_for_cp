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
vector<int>v;
void getdiv(int n){
    // vector<int> v;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            v.pub(i);
            if (n / i != i){
                v.pub(n / i);
            }
        }
    }
    // return ans;
}
void solve(){
    int x,y;cin>>x>>y;
    int sum=0;int z=y/x;
    int cnt=0,ans;
    // if(y%x==0)cout<<(y/x)<<" "<<1<<nl;
    v.clear();
    getdiv(z);
    sort(v.begin(),v.end());
    // for(int val:v)cout<<val<<" ";
    // cout<<nl;
    // cout<<v[v.size()-1]<<"k";
    if(x==1)cout<<x<<" "<<y<<nl;
    else if(x==y)cout<<3<<" "<<1<<nl;
    else if(y%x==0){
        if(v.size()==3){
            ans=v[1];
            while(z>1){
                sum++;
                z/=ans;
            }
            // if(sum==0)cout<<1<<" "<<v[0]<<nl;
            cout<<sum<<" "<<v[v.size()-1]<<nl;
        }else if(v.size()<3){
            // if(x==y)cout<<1<<" "<<1<<nl;
            cout<<0<<" "<<0<<nl;
        }
    }
    else cout<<0<<" "<<0<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}