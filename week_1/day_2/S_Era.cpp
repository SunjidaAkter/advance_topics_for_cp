#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n,sum=0;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        };
        for(int i=1;i<=v.size();i++){
            if(v[i-1]>i){
                v.insert(v.begin()+(i-1),i);
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}