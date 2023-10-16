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
    int k,n;cin>>k>>n;
    if(n==k){
        for(int i=0;i<k;i++)cout<<i+1<<" ";
        cout<<nl;
    }else{
        cout<<1<<" "<<2<<" ";
        int j=4;   
        for(int i=3;i<k;i++){
            while(n-j<k-i){
                j--;
            }
            cout<<j<<" ";
            j+=i;
        }
        cout<<n;
        cout<<nl;
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