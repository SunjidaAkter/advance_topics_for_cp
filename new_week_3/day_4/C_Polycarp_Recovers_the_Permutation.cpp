#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define elsady ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define test int t;cin>>t;while(t--)
#define fs first
#define sc second
#define ll long long
#define endl '\n'
#define be begin()
#define en end()
#define gr greater<int>
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define int ll
template <typename T> // T -> (can be integer, float or pair of int etc.)
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll MOD=998244353,OO=1e18;
const double PI=acos(-1);
const int N=5*(1e5+5),T=1e6+1;
vector<vector<int>>adj;
bool vis[N];
int dep[N];
int dx[]={1,-1,0,0,0,0};
int dy[]={0,0,1,-1,0,0};
int dz[]={0,0,0,0,1,-1};
int n,m;
int dis[N][2];
// bitmasks
//Number of leading zeroes: __builtin_clz(x)
//Number of trailing zeroes : __builtin_ctz(x)
//Number of 1-bits: __builtin_popcount(x);
//last one : __lg()
ll GCD(ll x,ll y){return y?GCD(y,x%y):x;}
ll LCM(ll x,ll y){return x/GCD(x,y)*y;}
ll prom(ll x,ll y){return ((x%MOD)*(y%MOD))%MOD;}
ll inv(ll a,ll b=MOD){return 1<a?b-inv(b%a,a)*b/a:1;}
bool prime(ll x)
{
  if(x<2)
   return 0;
 for(ll I=2;I*I<=x;I++)
    if(x%I==0)
    return 0;
   return 1;
}
bool allow(int I,int j){return (I>=0&&j>=0&&I<n&&j<m);}
signed main()
{
  elsady
  test
  {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   if(a[n-1]!=n&&a[0]!=n)
   {
    cout<<-1<<endl;
   }
   else 
   {
    reverse(a,a+n);
    for(auto i:a)cout<<i<<' ';
    cout<<endl;
   }
  }
}