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
    string s, t = "";
   cin >> s;

   if(s == "()"){
      no;
      return;
   }

   int n = s.size();

   bool equal = false;
   for(int i = 1; i < n; i++){
      if(s[i - 1] == s[i])
         equal = true;
   }

   if(equal){
      for(int i = 0; i < 2 * n; i++){
         if(i % 2 == 0)
            t += '(';
         else
            t += ')';
      }
   }
   else{
      for(int i = 0; i < n; i++)
         t += '(';
      for(int i = 0; i < n; i++)
         t += ')';
   }

   yes;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}