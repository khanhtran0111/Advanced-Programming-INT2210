#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
void reverse(char a[]){
    int i=0;
    while(a[i] != '\0'){
        i++;
    }
    for(int lmao = 0; lmao < i/2; lmao++){
        char temp = a[lmao];
        a[lmao]=a[i-lmao-1];
        a[i-lmao-1]=temp;
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
    char arr[maxn];
    cin.getline(arr, maxn);
    reverse(arr);
    cout<<arr;
    return 0;
}