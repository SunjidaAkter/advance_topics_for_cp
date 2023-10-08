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
    int a[4];
    int sum=0;
    for(int i=0;i<4;i++)cin>>a[i];
    for(int i=0;i<4;i++){
        if(a[i]>a[0])sum++;
    }
    cout<<sum<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}