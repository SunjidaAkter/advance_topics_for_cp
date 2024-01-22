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
string LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;         
    int endingIndex = m;    
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (X[i - 1] == Y[j - 1]){
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
                if (lookup[i][j] > maxlen){
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }
    return X.substr(endingIndex - maxlen, maxlen);
}
void solve(){
    string a,b;cin>>a>>b;
    if(a==b){
        cout<<0<<nl;
        return;
    }
    string ans=LCS(a,b,a.size(),b.size());
    cout<<(a.size()-ans.size())+(b.size()-ans.size())<<nl;
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