#include<bits/stdc++.h>
using namespace std;

int c(int k, int n){
    if(k == 0 || k == n) return 1;
    if(k == 1) return n;
    return c(k-1, n-1)+c(k, n-1);
}

signed main(){
    int n;
    cin>>n;
    for(int i=0; i< n; i++){
        for(int j=0; j<= i; j++){
            cout<<c(j,i)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}