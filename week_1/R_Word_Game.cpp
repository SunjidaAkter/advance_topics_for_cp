#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n,s1=0,s2=0,s3=0;cin>>n;
        int p=3;
        map<string,int>mp;
        vector<string>q1;
        vector<string>q2;
        vector<string>q3;
        while(p--){
            for(int i=0;i<n;i++){
                string s;cin>>s;
                mp[s]++;
                if(p==2){
                    q1.push_back(s);
                }
                if(p==1){
                    q2.push_back(s);
                }
                if(p==0){
                    q3.push_back(s);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(mp.count(q1[i])){
                if(mp[q1[i]]==2)s1++;
                if(mp[q1[i]]==1)s1+=3;
            }
            if(mp.count(q2[i])){
                if(mp[q2[i]]==2)s2++;
                if(mp[q2[i]]==1)s2+=3;
            }
            if(mp.count(q3[i])){
                if(mp[q3[i]]==2)s3++;
                if(mp[q3[i]]==1)s3+=3;
            }
        }
        cout<<s1<<" "<<s2<<" "<<s3<<endl;    
    }
    return 0;
}