#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
void delete_char(char a[], char c){
    int n=strlen(a);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == c) count++;
        else a[i-count]=a[i];
    }
    a[n-count]='\0';
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
    char c;
    cin>>c;
    delete_char(arr, c);
    cout<<arr;
    return 0;
}