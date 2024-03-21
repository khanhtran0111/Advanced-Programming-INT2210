#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
void pad_left(char a[], int n){
    int len = strlen(a);
    if(len >= n) return;
    int add=n-len;
    for(int i=len; i>= 0; i--){
        a[i+add]=a[i];
    }
    for(int i=0; i< add; i++){
        a[i]=' ';
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
    pad_left(arr, n);
    cout<<arr;
    return 0;
}