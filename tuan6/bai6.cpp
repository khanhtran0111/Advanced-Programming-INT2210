#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
bool is_palindrome(char a[]){
    int n = strlen(a);
    int mid = n/2;
    for(int i=0; i< mid; i++){
        if(a[i] != a[i+n-1]) return false;
    }
    return true;
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
    if(is_palindrome(a) == true) cout<<"yes";
    else cout<<"no";
    return 0;
}