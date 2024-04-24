#include<bits/stdc++.h>
using namespace std;

signed main(){
    int a, b;
    cin>>a>>b;
    int x;
    if(a*b < 0) x = -1;
    else x = 1;
    if(a == b){
        cout<<1;
        return 0;
    }
    int gcd = __gcd(a, b);
    a=a/gcd;
    b=b/gcd;
    cout<<a*x<<'/'<<b;
    return 0;
}