#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        int a[n];
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int j=1;
        for(int i=0;i<n;i++){
            while(a[i]==j)j++;
            v[i]=j;
            j++;
        }
        cout<<v[v.size()-1]<<endl;
    }
    return 0;
}