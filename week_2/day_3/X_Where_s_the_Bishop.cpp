#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
void solve(){
    vector<string>v;
    for(int i=0;i<8;i++){
        string s;cin>>s;
        v.pub(s);
    }
    int sum,jk;
    bool flag=false,f1=false,f2=false;
    for(int i=0;i<8;i++){
        sum=0;
        for (int j=0;j<8;j++){
            // if((i!=0&&i!=7)||(j!=0&&j!=7)){
                if(v[i][j]=='#'){
                    sum++;
                    jk=j;
                }
            // }
        }
        if(sum==2){
            flag=true;
        }
        if(sum==1&&flag){
            f1=true;
        }
        if(sum==2&&f1){
            cout<<i<<" "<<jk<<endl;
            break;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}