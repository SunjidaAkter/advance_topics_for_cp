#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int x,y;cin>>x>>y;
    if(x==y)cout<<x+y;
    else{
        if(x>y)cout<<x+(x-1);
        else cout<<y+(y-1);
    }
    return 0;
}