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
ll palin(string s){
    ll a = 0;
	for(ll i = 0; i < (s.length() / 2); i++) 
		if(s[i] == s[s.length() - 1 - i]) a++;
	if(a == (s.length() / 2)) return 1;
	else return 0;
}
int check(string str)
{
    int n = str.length();
 
    // Compute sum of even and odd digit
    // sums
    int oddDigSum = 0, evenDigSum = 0;
    for (int i=0; i<n; i++)
    {
        // When i is even, position of digit is odd
        if (i%2 == 0)
            oddDigSum += (str[i]-'0');
        else
            evenDigSum += (str[i]-'0');
    }
 
    // Check its difference is divisible by 11 or not
    return ((oddDigSum - evenDigSum) % 11 == 0);
}
void solve(){
    string s;cin>>s;
    for(ll i=0; i<s.size(); i++){
        if(s[i]!='1'&&s[i]!='0'){
            if(palin(s)&&check(s)){
                yes;return;
            }else no;return;
        }
    }
    yes;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}