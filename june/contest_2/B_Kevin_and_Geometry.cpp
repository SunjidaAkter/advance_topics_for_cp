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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    map<ll,ll>mp;
    vector<ll>a;
    for(ll i=0;i<n;i++)mp[v[i]]++;
    for(const auto& i:mp){
        if(i.second>=2){
            a.push_back(i.first);
        }
        if(i.second==4){
            cout<<i.first<<" "<<i.first<<" "<<i.first<<" "<<i.first<<nl;
            return;
        }
    }
    sort(all(a));
    if(a.size()==0){
        cout<<-1<<nl;
        return;
    }
    if(a.size()>=2){
        cout<<a[0]<<" "<<a[0]<<" "<<a[1]<<" "<<a[1]<<" "<<nl;
    }else{
        sort(all(v));
        if(mp[a[0]]>=4){
            cout<<a[0]<<" "<<a[0]<<" "<<a[0]<<" "<<a[0]<<nl;
            // return;
        }else if(mp[a[0]]==2){
            ll x=v[0];
            if(x==a[0]){
                x=v[2];
                for(ll i=3;i<n;i++){
                    if(x==a[0]||v[i]==a[0]){continue;}
                    else{
                        if(v[i]-x<2*a[0]){
                            cout<<a[0]<<" "<<a[0]<<" "<<x<<" "<<v[i]<<nl;
                            return;
                        }else x=v[i];
                    }
                }
            }else{
                for(ll i=1;i<n;i++){
                    if(x==a[0]||v[i]==a[0]){continue;}
                    else{
                        if(v[i]-x<2*a[0]){
                            cout<<a[0]<<" "<<a[0]<<" "<<x<<" "<<v[i]<<nl;
                            return;
                        }else x=v[i];
                    }
                }
            }
            cout<<-1<<nl;
        }else{
            for(ll i=0;i<n;i++){
                if(a[0]!=v[i]&&v[i]<3*a[0]){
                    cout<<a[0]<<" "<<a[0]<<" "<<a[0]<<" "<<v[i]<<nl;
                    return;
                }
            }
            ll x=v[0];
            if(x==a[0]){
                x=v[3];
                for(ll i=4;i<n;i++){
                    if(x==a[0]||v[i]==a[0]){continue;}
                    else{
                        if(v[i]-x<2*a[0]){
                            cout<<a[0]<<" "<<a[0]<<" "<<x<<" "<<v[i]<<nl;
                            return;
                        }else x=v[i];
                    }
                }
            }else{
                for(ll i=1;i<n;i++){
                    if(x==a[0]||v[i]==a[0]){continue;}
                    else{
                        if(v[i]-x<2*a[0]){
                            cout<<a[0]<<" "<<a[0]<<" "<<x<<" "<<v[i]<<nl;
                            return;
                        }else x=v[i];
                    }
                }
            }
            cout<<-1<<nl;
        } 
    }
    // ll x=0,y=0;
    // reverse(all(v));
    // // cout<<a[0]<<"nl"<<y<<"nn";
    // if(y){
    //     for(ll i=0;i<n;i++){
    //         if(v[i]!=a[0]&&v[i]!=x&&v[i]<x+2*a[i]){
    //             cout<<a[0]<<" "<<a[0]<<" "<<x<<" "<<v[i]<<nl;
    //             y=0;
    //             break;
    //         }
    //     }
    //     if(y==0)return;
    //     else{
    //         if(mp[a[0]]==3){
    //             cout<<a[0]<<" "<<a[0]<<" "<<a[0]<<" "<<x<<nl;
    //             return;
    //         }else{
    //             for(const auto& i:mp){
    //                 if(a[0]!=i.first&&i.first<2*a[0]+x&&i.second>=1){
    //                     cout<<a[0]<<" "<<a[0]<<" "<<i.first<<" "<<i.first<<nl;
    //                     y=0;
    //                     break;
    //                     // return;
    //                 }
    //                 if(a[0]!=i.first&&i.first<3*a[0]&&i.second>=2){
    //                     cout<<a[0]<<" "<<a[0]<<" "<<i.first<<" "<<i.first<<nl;
    //                     y=0;
    //                     break;
    //                     // return;
    //                 }
    //             }
    //             if(y==1){
    //                 cout<<-1<<nl;
    //                 return;
    //             }else return;
    //         }
            
    //     }
    // }else cout<<-1<<nl;
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