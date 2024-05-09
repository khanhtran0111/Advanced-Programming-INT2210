#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;

struct String {
    int n;       
    char* str;  
    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1]; 
        strcpy(str, s); 
    }
    ~String() {
        delete[] str;
    }
    void print() const {
        std::cout << str << std::endl;
    }
    void append(const char* s) {
        int len = strlen(s);
        char* temp = new char[n + len + 1]; 
        strcpy(temp, str);
        strcpy(temp + n, s);
        delete[] str; 
        str = temp; 
        n += len;
    }
};

signed main()
{
    if(ifstream(taskname".inp")) 
    {
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
    String greeting("Hi");
    greeting.append(" there");
    greeting.print();
    return 0;
}