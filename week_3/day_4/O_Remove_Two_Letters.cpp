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
    // char x,y;cin>>x>>y;
    // vector<string>v;
    // string str="";
    // str+=x;
    // str+=y;
    // // cout<<str<<" - ";
    // v.push_back(str);
    // for(int i=2;i<n;i++){
    //     char z;cin>>z;
    //     // string strr=str;
    //     if(str[0]==z){
    //         str[1]=z;
    //         continue;
    //     }
    //     str[0]=str[1];
    //     str[1]=z;
    //     // cout<<v.back()<<" + "<<str<<" ";
    //     if(v.back()==str){
    //         // str[1]=z;
    //         continue;
    //     }
    //     // cout<<str<<" - ";
    //     v.push_back(str);
    // }
    // cout<<v.size()<<nl;
    string s;cin>>s;
    int ans=n-1;
    for(int i=1;i<n-1;i++){
        if(s[i-1]==s[i+1])ans--;
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}