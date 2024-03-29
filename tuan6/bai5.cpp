#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
int check(int n){
    if (n < 2) return 0;
    for(int i=2; i<= sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

signed main()
{
    if(ifstream(taskname".inp")) 
    {
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
    int n;
    cin>>n;
    cout<<check(n);
    cout<<'\n';
    for(int i=1; i<= n; i++){
        if(check(i) == 1) cout<<i<<" ";
    }
    return 0;
}