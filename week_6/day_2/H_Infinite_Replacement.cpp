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
    string a,b;cin>>a>>b;bool flag=false;int sum=1;
    // set<char>bst;
    if(b.size()==1&&b[0]=='a')c(1);
    else if(b.size()==1&&b[0]!='a')c(2);
    else{
        for(int i=0;i<b.size();i++){
            if(b[i]=='a'){
                flag=true;
                continue;
            }else{
                // bst.insert(b[i]);
                sum++;
            }
        }
        int n=a.size();
        if(flag)c(-1);
        else c(sum*a.size());
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