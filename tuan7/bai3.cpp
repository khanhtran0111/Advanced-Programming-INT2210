#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
void pad_right(char a[], int n){
    int m=0;
    while(a[m] != '\0'){
        m++;
    }
    if(m > n) return;
    if(m < n-1){
        while(m < n-1){
            a[m++] = ' ';
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
    const int maxn=1000;
    char arr[maxn];
    cin.getline(arr, maxn);
    int n;
    cin>>n;
    pad_right(arr, n);
    cout<<arr;
    return 0;
}