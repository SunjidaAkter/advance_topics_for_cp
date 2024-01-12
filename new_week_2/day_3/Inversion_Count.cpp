#include<bits/stdc++.h>
using namespace std;
// int cnt;
long long merge(int a[],int l,int m,int r){
    long long inv=0;
    int leftSize=m-l+1;
    int rightSize=r-m;
    int L[leftSize],R[rightSize];
    int k=0;
    for(int i=l;i<=m;i++){
        L[k]=a[i];
        k++;
    }
    k=0;
    for(int i=m+1;i<=r;i++){
        R[k]=a[i];
        k++;
    }
    int i=0,j=0,curr=l;
    while(i<leftSize&& j<rightSize){
        if(L[i]<=R[j]){
            a[curr]=L[i];
            i++;
        }else{
            a[curr]=R[j];
            inv+=(leftSize-i);
            j++;
        }
        curr++;
    }
    while(i<leftSize){
        a[curr]=L[i];
        i++;
        curr++;
    }
    while(i<leftSize){
        a[curr]=R[i];
        i++;
        curr++;
    }
    return inv;
}

long long merge_sort(int a[],int l,int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=merge_sort(a,l,mid);
        inv+=merge_sort(a,mid+1,r);
        inv+=merge(a,l,mid,r);
    }
    return inv;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long cnt=merge_sort(a,0,n-1);
        cout<<cnt<<'\n';
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define all(X) (X).begin(), (X).end()
// #define nl '\n'
// #define yes cout<<"YES"<<nl
// #define no cout<<"NO"<<nl
// #define Yes cout<<"Yes"<<nl
// #define No cout<<"No"<<nl
// #define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
// typedef pair<ll,ll>pii;
// const ll N=1e5+7;
// ll nums[N];
// ll cnt=0;
// void merge(ll s,ll e,ll mid){

//     ll start_size=mid-s+1;
//     ll S[start_size+1];
    
//     ll end_size=e-(mid+1)+1;
//     ll E[end_size+1];

//     for(ll i=s,j=0;i<=mid;i++,j++){
//         S[j]=nums[i];
//     }
//     for(ll i=mid+1,j=0;i<=e;i++,j++){
//         E[j]=nums[i];
//     }

//     S[start_size]=LONG_MAX;
//     E[end_size]=LONG_MAX;

//     ll sp=0,ep=0;
//     for(ll i=s;i<=e;i++){
//         if(S[sp]<=E[ep]){
//             nums[i]=S[sp];
//             sp++;
//         }else{
//             nums[i]=E[ep];
//             cnt+=(start_size-sp);
//             ep++;
//         }
//     }
// }
// void mergeSort(ll s,ll e){
//     if(s==e)return;
//     ll mid=(s+e)/2;
//     mergeSort(s,mid);
//     mergeSort(mid+1,e);
//     merge(s,e,mid);
// }

// void solve(){
//     ll n;cin>>n;
//     cnt=0;
//     for(ll i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     mergeSort(0,n-1);
//     cout<<cnt<<nl;
// }
// int main(){
//     FAST;
//     int t=1;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }