#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
void trim_left(char a[]){
    int i=0;
    while(a[i] == ' '){
        i++;
    }
    int n=strlen(a);
    for(int j = 0; j < n; j++){
        a[j]=a[j+i];
    }
    a[n-i]='\0';
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
    trim_left(a);
    cout<<a;
    return 0;
}