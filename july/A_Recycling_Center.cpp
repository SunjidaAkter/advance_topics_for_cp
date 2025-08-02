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
    // Step 1: Input নিই
    int n,c;cin>>n>>c;
    vector<int>bag_weight(n);
    for(int i=0;i<n;i++){
        cin>>bag_weight[i];
    }
    // Step 2: Sort descending
    sort(bag_weight.begin(), bag_weight.end());
    reverse(bag_weight.begin(), bag_weight.end());
    // এটি double হওয়ার multiplier
    int double_cnt=1;
    // কয়টা bag free তে ধ্বংস করতে পারলাম
    int destroyed_bag=0;
    // Step 3: ধ্বংস শুরু (simulation)
    for(int i=0;i<n;i++){
        if(bag_weight[i]*double_cnt<=c){
            destroyed_bag++;// coin লাগলো না
            double_cnt*=2;// পরের ধাপে double হবে
        }
    }
    // Step 4: যেগুলো coin ছাড়া করা গেল না, তাদের সংখ্যাই হলো final উত্তর
    cout<<n-destroyed_bag<<nl;
}
int main(){
    FAST;
    int t=1;//test case count
    cin>>t;
    while(t--){
        solve();// solve function call
    }
    return 0;
}