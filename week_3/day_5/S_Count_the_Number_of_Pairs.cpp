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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int fr1[26]={0};
    int fr2[26]={0};
    for(int i=0;i<s.size();i++){
        if(s[i]>=65&&s[i]<=90)fr1[s[i]-'A']++;
        if(s[i]>=97&&s[i]<=122)fr2[s[i]-'a']++;
    }
    int s1=0,sum=0;
    for(int i=0;i<26;i++){
        if(fr1[i]>0||fr2[i]>0){
            if(fr1[i]==0){
                if(fr2[i]>1)s1+=fr2[i]/2;
            }
            if(fr2[i]==0){
                if(fr1[i]>1)s1+=fr1[i]/2;
            }
            if(fr1[i]-fr2[i]==0)sum+=fr1[i];
            else{
                if(fr1[i]-fr2[i]>0)sum+=fr2[i];
                if(fr1[i]-fr2[i]<0)sum+=fr1[i];
                if((fr1[i]>0&&fr2[i]>0)&&(abs(fr1[i]-fr2[i])>1)){
                    s1+=(abs(fr1[i]-fr2[i])/2);
                }
            }
        }
    }
    if(k>=s1)sum+=s1;
    else sum+=k;
    c(sum);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}