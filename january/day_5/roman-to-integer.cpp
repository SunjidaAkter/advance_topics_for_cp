#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
int romanToInt(string s) {
    int sum=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='I'){
            sum++;
        }else if(s[i]=='V'){
            if(i!=0){
                if(s[i-1]=='I'){
                    sum+=4;
                    i--;
                }else{
                    sum+=5;
                }
            }else{
                sum+=5;
            }
        }else if(s[i]=='X'){
            if(i!=0){
                if(s[i-1]=='I'){
                    sum+=9;
                    i--;
                }else{
                    sum+=10;
                }
            }else{
                sum+=10;
            }
        }else if(s[i]=='L'){
            if(i!=0){
                if(s[i-1]=='X'){
                    sum+=40;
                    i--;
                }else{
                    sum+=50;
                }
            }else{
                sum+=50;
            }
        }else if(s[i]=='C'){
            if(i!=0){
                if(s[i-1]=='X'){
                    sum+=90;
                    i--;
                }else{
                    sum+=100;
                }
            }else{
                sum+=100;
            }
        }else if(s[i]=='D'){
            if(i!=0){
                if(s[i-1]=='C'){
                    sum+=400;
                    i--;
                }else{
                    sum+=500;
                }
            }else{
                sum+=500;
            }
        }else if(s[i]=='M'){
            if(i!=0){
                if(s[i-1]=='C'){
                    sum+=900;
                    i--;
                }else{
                    sum+=1000;
                }
            }else{
                sum+=1000;
            }
        }
    }
    return sum;
}
void solve(){
    string s;cin>>s;
    cout<<romanToInt(s)<<nl;    
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}