#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
int roundd(double n){
    int r;
    if(n >= 0) r=(int)(n + 0.5);
    else r=(int)(n-0.5);
    return r;
}

signed main()
{
    if(ifstream(taskname".inp")) 
    {
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
    double n;
    cin>>n;
    cout<<roundd(n);
    return 0;
}