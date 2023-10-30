// #include<bits/stdc++.h>
// using namespace std;

// bool canFillContainers(const vector<int>& capacities, int m, int maxCapacity) {
//     int containers = 1;
//     int currentCapacity = 0;

//     for (int i = 0; i < capacities.size(); i++) {
//         if (currentCapacity + capacities[i] > maxCapacity) {
//             containers++;
//             currentCapacity = 0;
//         }

//         if (containers > m) {
//             return false;
//         }

//         currentCapacity += capacities[i];
//     }

//     return true;
// }

// int findMinimalMaxCapacity(const vector<int>& capacities, int m) {
//     int left = *max_element(capacities.begin(), capacities.end());
//     int right = accumulate(capacities.begin(), capacities.end(), 0);
//     int result = INT_MAX;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (canFillContainers(capacities, m, mid)) {
//             result = min(result, mid);
//             right = mid - 1;
//         } else {
//             left = mid + 1;
//         }
//     }

//     return result;
// }

// int main() {
//     int n, m;
//     while (cin >> n >> m) {
//         vector<int> capacities(n);
//         for (int i = 0; i < n; i++) {
//             cin >> capacities[i];
//         }

//         int minimalMaxCapacity = findMinimalMaxCapacity(capacities, m);
//         cout << minimalMaxCapacity << endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool isValid(int mid,int a[],int n,int m){
    int cnt=1;
    int last=0;
    for(int i=0;i<n;i++){
        if(last+a[i]>mid){
            cnt++;
            last=0;
        }
        last+=a[i];
    }
    return (m<=cnt);
}
int main(){
    int n,m;
    while(cin>>n>>m){
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=INT_MAX,l=0,r=INT_MAX;
        while(l<=r){
            int mid=l+(l-r)/2;
            if(isValid(mid,a,n,m)){
                ans=min(mid,ans);
                r=mid-1;
            }else l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}