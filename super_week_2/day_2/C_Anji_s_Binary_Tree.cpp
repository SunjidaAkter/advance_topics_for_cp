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
const int N = 3e5 +5;
typedef pair<int,int> pii;
 
 
int n;
pii adj[N];
string a;
 
int solve(int s)
{
    if(adj[s].first == -1  && adj[s].second==-1)
        return 0;
    int ans = 1e9;
    if(adj[s].first != -1)
    {
        int add = 0;
        if('L'!=a[s])
            add = 1;
        ans = min(ans , add + solve(adj[s].first));
    }
    if(adj[s].second != -1)
    {
        int add = 0;
        if('R'!=a[s])
            add = 1;
        ans = min(ans , add + solve(adj[s].second));
    }
    return ans;
}
void TEST_CASES()
{
    cin>>n;
    cin>>a;
    for(int i=0; i<n; i++)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        adj[i].first = l;
        adj[i].second = r;
    }
    int ans = solve(0);
    cout<<ans<<"\n";
}
 

int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        TEST_CASES();
    }
    return 0;
}