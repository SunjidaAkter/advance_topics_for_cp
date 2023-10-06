#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
void solve(){
    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;
    bool flag=true;
    for(int i=0;i<n;i++){
        if((s1[i]=='R'&&s2[i]!='R')||(s1[i]!='R'&&s2[i]=='R'))flag=false;
    }
    if(flag)yes;
    else no;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}