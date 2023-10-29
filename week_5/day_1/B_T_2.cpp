// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// typedef pair<ll,ll>pii;
// #define forl(var,str,end) for(long long int var=str; var<end; var++)
// int main(){
//     int n;cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     int q;cin>>q;
//     while(q--){
//         int x;cin>>x;
//         int l=0,r=n-1,ans=-1;
//         while(l<=r){
//             int mid=l+(r-l)/2;
//             if(x>=v[mid]){
//                 ans=mid;
//                 l=mid+1;
//             }
//             // if(v[mid]<x)l=mid+1;
//             if(v[mid]>x)r=mid-1;
//         }
//         if(v.size()==1)cout<<"X X"<<endl;
//         else{
//             if(ans==-1&&x<v[0])cout<<"X "<<v[0]<<endl;
//             else if(ans==-1&&x>v[n-1])cout<<v[n-1]<<" X"<<endl;
//             else if(ans==0)cout<<"X "<<v[1]<<endl;
//             else if(ans==n-1&&x==v[ans])cout<<v[n-2]<<" X"<<endl;
//             else if(ans==n-1)cout<<v[n-1]<<" X"<<endl;
//             else{
//                 if(v[ans]==x)cout<<v[ans-1]<<" "<<v[ans+1]<<endl;
//                 else cout<<v[ans]<<" "<<v[ans+1]<<endl;
//             }

//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl
#define srt(v) sort((v).begin(), (v).end())
#define rvr(v) reverse(srt(v))
#define all(v) (v).begin(), (v).end()
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll q;
    cin >> q;
    while(q--){
        ll x;cin>>x;
        auto it = lower_bound(v.begin(),v.end(),x);
        auto it2 = upper_bound(all(v),x);

        if(it==v.begin()){
                cout<<"X ";
        }
        else{
            it--;
            cout<<*it<<" ";
        }
        
        if(it2==v.end()){
            cout<<"X"<<endl;
        }
        else{
            cout<<*it2<<endl;
        }
    }
}

int main()
{
    FAST;
    int t = 1;
    //    cin >> t ;
    while (t--)
    {
        solve(t);
    }
    return 0;
}