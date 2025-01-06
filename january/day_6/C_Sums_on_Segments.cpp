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
ll maxSubArray(vector<ll>& nums) {
    ll n=nums.size(),cur_sum=0,mx=INT_MIN;
    for(ll i=0;i<n;i++){
        cur_sum+=nums[i];
        mx=max(mx,cur_sum);
        if(cur_sum<0)cur_sum=0;
    }
    return mx;
}
void solve(){
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll vv=0,ii=-1;
    set<ll>s1,s2;
    for(ll i=0;i<n;i++){
        if(v[i]!=1 && v[i]!=-1){
            vv=v[i];
            ii=i;
        }
    }
    s1.insert(0);
    s2.insert(0);
    if(ii!=-1){
        ll sum=0;
    // cout<<ii<<nl;
        for(ll i=ii-1;i>=0;i--){
            sum+=v[i];
            s1.insert(sum);
        }
        sum=0;
        for(ll i=ii+1;i<n;i++){
            sum+=v[i];
            s2.insert(sum);
        }
        // cout<<*(s1.begin())<<"+"<<*(s2.begin())<<" ";
        ll l,r;
        // ll r=*(s1.rbegin())+*(s2.rbegin());
        ll a1=*(s1.begin())+*(s2.begin())+v[ii];
        // cout<<a1<<" v";
        // ll b1=0+v[ii];
        while(s1.size()>0){
            l=*(s1.begin());
            s1.erase((s1.begin()));
        }
        while(s2.size()>0){
            r=*(s2.begin());
            s2.erase((s2.begin()));
        }
        ll b1=l+r+v[ii];
        vector<ll>v1,v2,v3,v4;
        for(ll i=0;i<ii;i++){
            v1.push_back(v[i]);
            v2.push_back(-v[i]);
        }
        ll a2=-maxSubArray(v2);
        ll b2=maxSubArray(v1);
        for(ll i=ii+1;i<n;i++){
            v3.push_back(v[i]);
            v4.push_back(-v[i]);
        }
        ll a3=-maxSubArray(v4);
        ll b3=maxSubArray(v3);
        set<ll>st;
        st.insert(0);
        for(ll i=a1;i<=b1;i++){
            st.insert(i);
        }
        for(ll i=a2;i<=b2;i++){
            st.insert(i);
        }
        for(ll i=a3;i<=b3;i++){
            st.insert(i);
        }
        cout<<st.size()<<nl;
        for(auto &i:st)cout<<i<<" ";
        cout<<nl;
    }else{
        // vector<ll>v1;
        ll a=maxSubArray(v);
        for(auto &i:v){
            i=-i;
        }
        ll b=-maxSubArray(v);
        
        set<ll>st;
        st.insert(0);
        for(ll i=b;i<=a;i++)st.insert(i);
        cout<<st.size()<<nl;
        
        for(auto &it:st){
            cout<<it<<" ";
        }

        // cout<<st.size()<<nl;
        // for(auto &i:st)cout<<i<<" ";
        cout<<nl;
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