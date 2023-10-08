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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        int k;cin>>k;
        string s;cin>>s;
        int u=0,d=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='U')u++;
            if(s[j]=='D')d++;
        }
        int ans=a[i]+d-u;
        if(ans>9)ans-=10;
        if(ans<0)ans+=10;
        cout<<ans<<" ";
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}