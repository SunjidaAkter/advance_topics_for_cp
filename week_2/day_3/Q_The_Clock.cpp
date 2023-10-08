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
    int HH,MM,n;char ch;
    cin>>HH>>ch>>MM>>n;
    int h=HH,m=MM;
    int cnt=0;
    if(HH/10==MM%10&&HH%10==MM/10)cnt++;
    MM=MM+n;
    HH+=MM/60;
    MM%=60;
    HH%=24;
    while(m!=MM || h!=HH){
        // cout<<HH<<"H"<<MM<<"M"<<endl;
        if(HH/10==MM%10&&HH%10==MM/10)cnt++;
        MM+=n;
        HH+=MM/60;
        MM%=60;
        HH%=24;
    }
    cout<<cnt<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}