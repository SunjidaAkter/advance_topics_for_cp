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
bool check(int n,int k,int v[] ){
    vector<int>bits(22,0);
    for(int i=0;i<k;i++){
        int x=v[i];
        int j=0;
        while(x>0){
            if(x%2)bits[j]++;
            j++;
            x/=2;
        }
    }
    vector<int>freq=bits;
    for(int i=k;i<n;i++){
        int x=v[i];
        int j=0;
        while(x>0){
            if(x%2)freq[j]++;
            j++;
            x/=2;
        }
        x=v[i-k];
        j=0;
        while(x>0){
            if(x%2)freq[j]--;
            j++;
            x/=2;
        }
        for(int ii=0;ii<22;ii++){
            if ((freq[ii] > 0 && bits[ii] == 0) || (freq[ii] == 0 && bits[ii] > 0)) {
                return false;
            }
        }
    }
        return true;
}
void solve(){
    int n;cin>>n;
    int v[n];
    for(int i=0;i<n;i++)cin>>v[i];
    int low=1,high=n,ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(check(n,mid,v)==true){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans<<nl;
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