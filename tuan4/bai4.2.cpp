#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int a[n+5][n+5];
    for(int i=1; i<= n; i++){
        for(int j=1; j <= n; j++){
            if(i == j) a[i][j]=1;
            a[i][1]=1;
        }
    }
    for(int i=3; i<= n; i++){
        for(int j=2; j<= i-1; j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=1; i<= n; i++){
        for(int j=1; j<= i; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}