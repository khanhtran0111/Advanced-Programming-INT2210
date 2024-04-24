#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
int f[maxn];

void sieve(int n){
    for(int i=1; i<= n; i++){
        f[i]=1;
    }
    f[1]=0;
    for(int i=2; i*i <= n; i++){
        if(f[i] == 1){
            for(int j=i*i; j<= n; j+=i){
                f[j]=0;
            }
        }
    }
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
    sieve(n);
    for(int i=1; i<= n; i++){
        if(f[i] == 1) cout<<i<<" ";
    }
    return 0;
}