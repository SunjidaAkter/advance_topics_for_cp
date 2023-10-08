#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
void solve(){
    int mn=INT_MAX,sum,n,k;cin>>n>>k;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.pub(s);
    }
    for(int i=0;i<n-1;i++){
        for(int l=i+1;l<n;l++){
            sum=0;
            for(int j=0;j<k;j++){
                sum+=abs(v[i][j]-v[l][j]);
            }
            // cout<<sum<<"en";
            mn=min(mn,sum);
        }
    }
    cout<<mn<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}