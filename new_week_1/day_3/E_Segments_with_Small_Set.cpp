#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define sec second
const int N=1000000007;

#define lp for(int i=0;i<n;i++)
ll f[100001]={0};

int main() { 
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    ll n,k; cin>>n>>k; 
    ll a[n]; 
    for(ll i=0;i<n;i++)cin>>a[i]; 
    int num = 0; 
    int i=0,prev=0,ans=0;
    if(k==0){
        cout<<0;
    }else{ 
        while(i<n){ 
            while(i<n && num<=k){
                f[a[i]]++;
                if(f[a[i]]==1){
                    num++;
                }
                if(num<=k){
                    ans += (i-prev+1);
                    i++;
                }else break;
            }

            if(i<n){
                f[a[i]]--;
                if(f[a[i]]==0)num--;
            }

            f[a[prev]]--;
            if(f[a[prev]]==0){
                num--;
            }

            prev++;
        }
        cout<<ans;
    }
    return 0; 
}