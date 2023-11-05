#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        if(s[0]<s[1]){
            cout<<((s[0]-96)-1)*25+(s[1]-96-1)<<endl;
        }else{
            cout<<((s[0]-96)-1)*25+(s[1]-96)<<endl;
        }
    }
    return 0;
}