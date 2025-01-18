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
bool isVowel (char x) {
    char y = toupper(x);
    return (y=='A' || y=='E' || y=='I'|| y=='O'|| y=='U');
}
string reverseVowels(string s) {
    int i=0,j=s.size()-1;
    while(i<j){
        if(isVowel(s[i]) && isVowel(s[j])){
            swap(s[i],s[j]);
            i++,j--;
        }else if(isVowel(s[i]) && !isVowel(s[j])){
            j--;
        }else if(!isVowel(s[i]) && !isVowel(s[j])){
            i++,j--;
        }else if(!isVowel(s[i]) && isVowel(s[j])){
            i++;
        } 
    }
    return s;
}
void solve(){
    string s;cin>>s;
    cout<<reverseVowels(s)<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}