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
    int n;cin>>n;
    int temp=n;
    int kitna=0;
    while(temp)
    {
        temp=temp/10;
        kitna++;
    }
    kitna--;
    //cout<<kitna<<endl;
    int ans=kitna*9;
    kitna++;
    
    for(int i=1;i<=9;i++)
    {
        string s="";
        string t=to_string(i);
        for(int j=1;j<=kitna;j++)
        s+=t;
        
        if(s<=to_string(n))
        ans++;
    }
    cout<<ans<<endl;
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