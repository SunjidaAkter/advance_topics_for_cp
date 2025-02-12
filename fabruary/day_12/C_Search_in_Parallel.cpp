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
void solve(){
    int n,s1,s2;
		cin>>n>>s1>>s2;
		vector<pair<int,int>> arr(n);
		int d;
		for(int i=0;i<n;i++)
		{
			cin>>d;
			arr[i] = {d,i+1};
		}
		sort(arr.rbegin(),arr.rend());
		int iter1=0,iter2=0;
		int ans1[n],ans2[n];
		for(int i=0;i<n;i++)
		{
			if(s1*1LL*(iter1+1) <= s2*1LL*(iter2+1))
			{
				ans1[iter1++] = arr[i].second;
			}
			else
			{
				ans2[iter2++] = arr[i].second;
			}
		}
		cout<<iter1<<" ";
		for(int i=0;i<iter1;i++)
		{
			cout<<ans1[i]<<" ";
		}
		cout<<"\n"<<iter2<<" ";
		for(int i=0;i<iter2;i++)
		{
			cout<<ans2[i]<<" ";
		}
		cout<<"\n";
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}