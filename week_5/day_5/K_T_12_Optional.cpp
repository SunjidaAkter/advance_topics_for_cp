// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pub push_back
// #define pob pop_back
// #define nl  '\n'
// #define yes cout << "YES" << nl
// #define no cout << "NO" << nl
// #define Yes cout << "Yes" << nl
// #define No cout << "No" << nl
// typedef pair<int,int>pii;
// #define forl(ty,var,str,end) for(ty var=str; var<end; var++)
// # define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
// double distance(double ai,double aj,double bi,double bj){
//     return (sqrt(((ai-bi)*(ai-bi))+((aj-bj)*(aj-bj))));
// }
// bool inside(double ai,double aj,double bi,double bj,double mid){
//     return distance(ai,aj,bi,bj)<=mid;
// }
// void solve(){
//     double pi,pj,ai,aj,bi,bj;
//     cin>>pi>>pj>>ai>>aj>>bi>>bj;
//     double l=0,r=1e5;
//     double ans;
//     while((r-l)>1e-11){
//         double mid=(l+r)/2;
//         if(inside(ai,aj,pi,pj,mid)&&inside(ai,aj,0,0,mid)){
//             ans=mid;r=mid;
//         }else if(inside(bi,bj,pi,pj,mid)&&inside(bi,bj,0,0,mid)){
//             ans=mid;r=mid;
//         }else if(inside(bi,bj,pi,pj,mid)&&inside(ai,aj,0,0,mid)&&distance(ai,aj,bi,bj)<=2*mid){
//             ans=mid;r=mid;
//         }else if(inside(ai,aj,pi,pj,mid)&&inside(bi,bj,0,0,mid)&&distance(ai,aj,bi,bj)<=2*mid){
//             ans=mid;r=mid;
//         }else{
//             l=mid;
//         }
//     }   
//     cout<<fixed<<setprecision(10)<<ans<<nl;
// }
// int main(){
//     FAST;
//     int t;cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
// https://c...content-available-to-author-only...s.com/problemset/problem/1886/B

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/assoc_container.hpp>

using namespace std;

#define ln '\n'
#define all(x) (x).begin(), (x).end()

// const int N = 1e5 + 1;

double distance(int ax, int ay, int bx, int by)
{
    return sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
}

bool inside(int ax, int ay, int bx, int by, double r)
{
    return distance(ax, ay, bx, by) <=r;
}

void solve()
{
    int ax, ay, bx, by, px, py;
    cin >> px >> py >> ax >> ay >> bx >> by;

    double l = 0;
    double r = INT_MAX;
    double ans;

    while (r - l > 1e-15)
    {
        bool flag = false;

        double mid = ((r - l) / 2) + l;

        if (inside(ax, ay, 0, 0, mid) and
            inside(ax, ay, px, py, mid)) flag = true;
        else if (inside(bx, by, 0, 0, mid) and
                 inside(bx, by, px, py, mid)) flag = true;
        else if (inside(ax, ay, 0, 0, mid) and
                 inside(bx, by, px, py, mid) and
                 (distance(ax, ay, bx, by)) <= 2*mid) flag = true;
        else if (inside(bx, by, 0, 0, mid) and
                 inside(ax, ay, px, py, mid) and
                 (distance(ax, ay, bx, by)) <= 2*mid) flag = true;

        if (flag)
        {
            ans = mid;
            r = mid;
        }
        else l = mid;
    }

    cout << fixed << setprecision(10) << ans << ln;

    // cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}