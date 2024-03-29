#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
signed main()
{
    if(ifstream(taskname".inp")) 
    {
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
    int a, b;
    cin>>a>>b;
    int x=__gcd(a, b);
    cout<<x<<'\n';
    if(x == 1) cout<<"yes";
    else cout<<"no";
    return 0;
}