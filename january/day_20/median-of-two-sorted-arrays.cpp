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
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int i=0,j=0,n1=nums1.size(),n2=nums2.size();
    int idx2=(n1+n2)/2,idx1=((n1+n2)/2)-1,el1=-1,el2=-1,cnt=0;
    while(i<n1&&j<n2){
        if(nums1[i]<nums2[j]){
            if(cnt==idx1)el1=nums1[i];
            if(cnt==idx2)el2=nums1[i];
            cnt++;
            i++;
        }else{
            if(cnt==idx1)el1=nums2[j];
            if(cnt==idx2)el2=nums2[j];
            cnt++;
            j++;
        }
    }
    while(i<n1){
        if(cnt==idx1)el1=nums1[i];
        if(cnt==idx2)el2=nums1[i];
        cnt++;
        i++;
    }
    while(j<n2){
        if(cnt==idx1)el1=nums2[j];
        if(cnt==idx2)el2=nums2[j];
        cnt++;
        j++;
    }
    if((n1+n2)%2==1){
        return el2;
    }else{
        return (double)((double)(el1+el2))/2.0;
    }
}
void solve(){
      int n;cin >> n;
      vector<int> nums1(n);
      for(int i=0;i<n;i++){
        cin >> nums1[i];
      }  
      int m;cin >> m;
      vector<int> nums2(m);
      for(int i=0;i<m;i++){
        cin >> nums2[i];
      }
      double ans=findMedianSortedArrays(nums1,nums2);
      cout<<fixed<<setprecision(1)<<ans<<endl;
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