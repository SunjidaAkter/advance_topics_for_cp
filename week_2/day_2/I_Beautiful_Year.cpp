#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    n++;
    while(true){
        string s=to_string(n);
        set<int>st;
        for(int i=0;i<4;i++){
            st.insert(s[i]);
        }
        if(st.size()==4)break;
        n++;
    }
    cout<<n;
    return 0;
}