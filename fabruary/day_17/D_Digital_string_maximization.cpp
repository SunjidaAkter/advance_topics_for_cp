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
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (int i = int(s.size()) - 1; i >= 0; i--) {
      int best = i;
      int val = int(s[i] - '0');
      for (int j = i; j >= max(0, i - 9); j--) {
        int cur = int(s[j] - '0') - (i - j);
        if (cur > val) {
          val = cur;
          best = j;
        }
      }
      rotate(s.begin() + best, s.begin() + best + 1, s.begin() + i + 1);
      s[i] = char('0' + val);
    }
    reverse(s.begin(), s.end());
    cout << s << '\n';
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