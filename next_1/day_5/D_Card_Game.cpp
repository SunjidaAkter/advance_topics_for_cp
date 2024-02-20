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
    ll n;cin>>n;
    char trump;cin>>trump;
    vector<string>cards,trumpCards;
    vector<pair<string,string>>ans;
    for(ll i=0;i<2*n;i++){
        string card;cin>>card;
        if(card[1]==trump){
            trumpCards.push_back(card);
        }else{
            cards.push_back(card);
        }
    }
    ll ok=1;
    for(ll i=0;i<cards.size();i++){
        for(ll j=0;j<cards.size();j++){
            if(i==j)continue;
            if(cards[i]=="")continue;
            if(cards[j]=="")continue;
            if(cards[i][1]==cards[j][1]){
                ans.push_back({min(cards[i],cards[j]),max(cards[i],cards[j])});
                cards[i]="";
                cards[j]="";
            }
        }
    }
    for(ll i=0;i<cards.size();i++){
        if(cards[i]!=""){
            if(trumpCards.empty()){
                ok=0;
                break;
            }
            else{
                 ans.push_back({cards[i],trumpCards.back()});
                 trumpCards.pop_back();
            }
        }
    }
    if(trumpCards.size()%2==1)ok=0;
    else{
        sort(all(trumpCards));
        for(ll i=0;i<trumpCards.size();i++){
            ans.push_back({trumpCards[i],trumpCards.back()});
            trumpCards.pop_back();
        }
    }
    if(ok){
        for(auto val:ans){
            cout<<val.first<<" "<<val.second<<nl;
        }
    }else{
        cout<<"IMPOSSIBLE"<<nl;
    }
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