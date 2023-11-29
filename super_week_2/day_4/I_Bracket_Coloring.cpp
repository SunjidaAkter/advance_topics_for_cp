#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    stack<int>st1,st2;
    int cl1=0,cl2=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            if(!st1.empty()&&st1.top()==')'){
                st1.pop();
                v.push_back(1);
                cl1++;
            }else{
                st2.push(s[i]);
                v.push_back(2);
                cl2++;
            }
        }else{
            if(!st2.empty()&&st2.top()=='('){
                st2.pop();
                v.push_back(2);
            }else{
                st1.push(s[i]);
                v.push_back(1);
            }
        }
    }
    if(st1.empty()&&st2.empty()){
        if(cl1&&cl2){
            cout<<2<<nl;
            for(int val:v)cout<<val<<" ";
            cout<<nl;
        }else{
            cout<<1<<nl;
            for(int val:v)cout<<1<<" ";
            cout<<nl;
        }
    }else{
        cout<<-1<<nl;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}