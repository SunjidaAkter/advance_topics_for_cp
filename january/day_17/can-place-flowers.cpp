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
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int sum=0;
    if(flowerbed.size()==1){
        if(flowerbed[0]==0 ){
            if(n<=1)return true;
            else false;
        }else{
            if(n==0)return true;
            else return false;
        }
    }
    if(flowerbed.size()==2){
        if(flowerbed[0]==0 && flowerbed[1]==0 ){
            if(n<=1)return true;
            else false;
        }else{
            if(n==0)return true;
            else return false;
        }
    }
    if(flowerbed[0]==0 && flowerbed[1]==0){
        sum++;flowerbed[0]=1;
    }
    for(int i=1;i<flowerbed.size()-1;i++){
        if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){sum++;flowerbed[i]=1;}
    }
    if(flowerbed.back()==0 && flowerbed[flowerbed.size()-2]==0){
        sum++;flowerbed.back()=1;
    }
    if(sum>=n)return true;
    else return false;
}

void solve(){
    int n,k;cin>>n>>k;
    vector<int>flowerbed(n);
    for(auto &x:flowerbed)cin>>x;
    if(canPlaceFlowers(flowerbed,k))cout<<"true";
    else cout<<"false";
    cout<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}