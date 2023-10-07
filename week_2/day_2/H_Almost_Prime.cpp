#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
set<int>st;
bool isPrime(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)sum++;
    }
    return (sum==1);
}
void distinctDivisors(int n){
    st.clear();
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            if(isPrime(n/i))st.insert(n/i);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(!st.empty()){
        cout<<*st.begin()<<" ";
        st.erase(st.begin());
    }
    for(int i=6;i<=n;i++){
        distinctDivisors(i);
        if(st.size()==2)sum++;
    }
    cout<<sum;
    return 0;
}