#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;

char* concat(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* result = new char[len1 + len2 + 1];
    strcpy(result, str1);
    strcpy(result + len1, str2);
    return result;
}

signed main()
{
    if(ifstream(taskname".inp")) 
    {
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
    const char* str1 = "Hello";
    const char* str2 = "World";
    char* kq = concat(str1, str2);
    cout << kq;
    delete[] kq;
    return 0;
}