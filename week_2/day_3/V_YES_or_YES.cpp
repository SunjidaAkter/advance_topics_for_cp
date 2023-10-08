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
    string s;cin>>s;
    if((s[0]=='y'||s[0]=='Y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='s'||s[2]=='S'))yes;
    else no;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}