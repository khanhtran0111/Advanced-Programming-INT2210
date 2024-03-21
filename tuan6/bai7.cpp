#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
void lmao(int m, int n){
    for(int i=1; i<= m; i++) cout<<" ";
    for(int i=1; i<= n; i++) cout<<"*";
    cout<<'\n';
}

void troll (int n){
    for(int i=1; i<= n; i++){
        lmao(n-i, i*2-1);
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
    troll(n);
    return 0;
}