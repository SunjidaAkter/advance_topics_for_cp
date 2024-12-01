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
    string s;cin>>s;
    ll a=0,b=0,pos=0,mn=INT_MAX,ans=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0')a++;
        if(s[i]=='1')b++;
    }
     pii v1;v1.first=0;v1.second=0;
     pii v2;v2.first=b;v2.second=a;
     set<ll>p;
    if(v1.first>=v1.second && v2.first>=v2.second){
        pos=0;
        cout<<"pos="<<pos<<" ";
        if(mn>abs((n/2)-pos)){
            mn=abs((n/2)-pos);
            cout<<"mn="<<mn<<" ";
            ans=pos;
            // p.insert(pos);
        }
        // if(mn==abs((n/2)-pos)){
        //     mn=abs((n/2)-pos);
        //     cout<<"mn="<<mn<<" ";
        //     ans=pos;
        //     p.insert(pos);
        // }
    }

     for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            v1.first++;
            v2.second--;
        }
        if(s[i]=='1'){
            v2.first--;
            v1.second++;
        }
        if(v1.first>=v1.second && v2.first>=v2.second){
            pos=i+1;
            cout<<"pos="<<pos<<" ";
            if(mn>abs((n/2)-pos)){
                mn=abs((n/2)-pos);
                cout<<"mn="<<mn<<" ";
                ans=pos;
                // p.insert(pos);
            }else if(mn==abs((n/2)-pos)){
                mn=abs((n/2)-pos);
                cout<<"mn="<<mn<<" ";
                // ans=pos;
                p.insert(ans);
            }
        }
     }
     cout<<*p.begin()<<nl;
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