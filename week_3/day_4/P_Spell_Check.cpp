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
    set<char>st;
    if(n!=5)no;
    else{
        for(int i=0;i<5;i++){
            if(s[i]=='T'||s[i]=='i'||s[i]=='m'||s[i]=='u'||s[i]=='r'){
                st.insert(s[i]);
                sum++;
            }
            else break;
        }
        if(sum==5&&st.size()==sum)yes;
        else no;
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