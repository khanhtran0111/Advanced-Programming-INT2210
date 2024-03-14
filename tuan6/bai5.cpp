#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
void Truncate(char a[], int n){
    int len = strlen(a);
    if(len <= n) return;
    for(int i=n; i<len; i++){
        a[i]='\0';
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
    const int maxn=1000;
    char a[maxn];
    cin.getline(a, maxn);
    int n;
    cin>>n;
    Truncate(a, n);
    cout<<a;
    return 0;
}