#include<bits/stdc++.h>
using namespace std;

int power(int x, int y){
    if(y == 0) return 1;
    int t=power(x, y/2);
    if(y % 2 == 0) return t*t;
    else return t*t*x;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<power(a, b);
    return 0;
}