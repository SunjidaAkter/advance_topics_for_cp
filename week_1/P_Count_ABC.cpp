#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;cin>>n;
    string s;cin>>s;
    int j=0,sum=0;
    string ss="";
    while(j<n){
        ss+=s[j];
        if(j>=2){
            if(ss=="ABC"){
                sum++;
            }
            ss.erase(ss.begin());
        }
        j++;
    }
    cout<<sum;
    return 0;
}