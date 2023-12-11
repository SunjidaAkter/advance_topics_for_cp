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
    int n,m;cin>>n>>m;
    char a[n][m];
    vector<int> row(n,0),col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            if(a[i][j]=='U')cnt++;
        }
        if(cnt%2){
            cout<<-1<<endl;
            return;
        }
        row[i]=cnt;
    }
    for(int j=0;j<m;j++){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i][j]=='L')cnt++;
        }
        if(cnt%2){
            cout<<-1<<endl;
            return;
        }
        col[j]=cnt;
    }
    for(int i=0;i<n;i++){
        int x=row[i];
        if(!x)continue;
        x/=2;
        for(int j=0;j<m;j++){
            if(a[i][j]=='U'){
                if(x){
                    a[i+1][j]='B';
                    a[i][j]='W';
                    x--;
                }else{
                    a[i][j]='B';
                    a[i+1][j]='W';
                }
            }
        }
    }
    for(int j=0;j<m;j++){
        int x=col[j];
        if(!x)continue;
        x/=2;
        for(int i=0;i<n;i++){
            if(a[i][j]=='L'){
                if(x){
                    a[i][j]='W';
                    a[i][j+1]='B';
                    x--;
                }else{
                    a[i][j]='B';
                    a[i][j+1]='W';
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<nl;
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