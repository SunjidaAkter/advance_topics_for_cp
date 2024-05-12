#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    string s;cin>>s;
    if(s=="LL"||s=="OO"||s=="LOL"||s=="OLO"||s=="OLOL"||s=="LOLO"||s=="LOOL"||s=="OLLO")cout<<-1;
    else if(s=="LLOO"||s=="OOLL"||s=="LLO"||s=="OOL"){
        cout<<2;
    }else if(n<=4){
        cout<<1;
    }else if(n>4){
        ll l=0,o=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='L')l++;
            if(s[i]=='O')o++;
        }
        if((l==2||o==2)&&((s[n-1]=='L'&&s[0]=='L')||(s[n-1]=='O'&&s[0]=='O')))cout<<-1;
        else if((l==2&&s[0]=='L')){
            ll cnt=0;
            for(ll i=n-1;i>=0;i--){
                if(s[i]=='L'){cnt=i+1;break;}
            }
            // cout<<"L";
            cout<<cnt;
        }else if((o==2&&s[0]=='O')){
            ll cnt=0;
            for(ll i=n-1;i>=0;i--){
                if(s[i]=='O'){cnt=i+1;break;}
            }
            cout<<cnt;
        }else{
            cout<<1;
        }
    }
    return 0;
}