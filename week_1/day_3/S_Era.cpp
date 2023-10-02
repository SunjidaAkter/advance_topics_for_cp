#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int indx=0;
        for(int i=0;i<n;i++){
            if(a[i]>indx+1+i){
                indx+=(a[i]-(i+indx+1));
            }
        }
        cout<<indx<<endl;
    }
    return 0;
}