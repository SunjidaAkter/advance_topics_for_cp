#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int j=1;
    while(true){
        int n,q;cin>>n>>q;
        if(n==0&&q==0)break;
        else{
            int a[n];
            for(int i=0;i<n;i++)cin>>a[i];
            sort(a,a+n);
            cout<<"CASE# "<<j<<":"<<endl;
            for(int i=0;i<q;i++){
                int x;cin>>x;
                auto ans=lower_bound(a,a+n,x);
                if(*ans==x)cout<<x<<" found at "<<(ans-a)+1<<endl;
                else cout<<x<<" not found"<<endl;
            }
        }
        j++;
    }
    return 0;
}