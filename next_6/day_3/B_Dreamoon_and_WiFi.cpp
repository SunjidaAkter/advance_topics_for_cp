 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long
 #define all(X) (X).begin(), (X).end()
 #define nl '\n'
 #define yes cout<<"YES"<<nl
 #define no cout<<"NO"<<nl
 #define Yes cout<<"Yes"<<nl
 #define No cout<<"No"<<nl
 #define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 typedef pair<ll,ll>pii;
 void solve(){
     string s1,s2;cin>>s1>>s2;
     ll cnt=0,p1=0,p2=0,b=0;
     for(ll i=0;i<s1.size();i++){
        if(s1[i]=='+')p1++;
        if(s2[i]=='+')p2++;
        if(s2[i]=='?')b++;
     }
     for(ll i=0;i<(1<<b);i++){
        if(__builtin_popcount(i)+p2==p1)cnt++;
     }
     cout<<fixed<<setprecision(12)<<(double)(cnt)/(1<<b)<<nl;
 }
 int main(){
     FAST;
     int t=1;
    //  cin>>t;
     while(t--){
         solve();
     }
     return 0;
 }