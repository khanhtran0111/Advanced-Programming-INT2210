#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
void trim_right(char a[]){
    int n=strlen(a);
    int i=n-1;
    while(a[i] == ' ') i--;
    a[i+1]='\n';
}

signed main()
{
    if(ifstream(taskname".inp")) 
    {
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
    char a[1000];
    cin.getline(a, 1000);
    trim_right(a);
    cout<<a;
    return 0;
}