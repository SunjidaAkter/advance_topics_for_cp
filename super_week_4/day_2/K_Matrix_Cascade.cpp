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
    int n;
    cin >> n;
    
    vector<vector<int>> g(n, vector<int>(n + 2, 0));
    
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        
        s = '?' + s;
        
        for(int j=1;j< n + 1;j++)
            g[i][j] = s[j] - '0';
    }
    
    int ans = 0;
    
    vector<int> start(n + 2, 0), end(n + 2, 0);
    
    for(int i=0;i<n;i++){
        vector<int> f(n + 2, 0);
        f[0] = start[0];
        
        for(int j=1;j<n + 2;j++)f[j]=f[j-1]+start[j]-end[j-1];
            
        vector<int> nextstart(n + 2, 0), nextend(n + 2, 0);
        nextstart[0] = start[0];
        nextend[n + 1] = end[n + 1];
        
        for(int j=1;j<n + 1;j++){
            if((g[i][j] & 1) ^ (f[j] & 1)){
                ++ans;
                nextstart[j - 1]++;
                nextend[j + 1]++;
            }
        }
        
        for(int i=0;i<n + 2;i++){
            if(i + 1 < n + 2)
                nextstart[i] += start[i + 1];
            if(i - 1 > -1)
                nextend[i] += end[i - 1];
        }
        
        start = nextstart;
        end = nextend;
    }
    
    cout << ans << nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}