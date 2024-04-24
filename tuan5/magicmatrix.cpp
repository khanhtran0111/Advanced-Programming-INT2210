#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    int i = n / 2;
    int j = n - 1;
    for (int num = 1; num <= n*n;) {
        if (i == -1 && j == n) {
            j = n - 2;
            i = 0;
        } else {
            if (j == n)
                j = 0;
            if (i < 0)
                i = n - 1;
        }
        if (a[i][j]) {
            j -= 2;
            i++;
            continue;
        } else
            a[i][j] = num++;
        j++;
        i--;
    }
    for(int i=0; i< n; i++){
        for(int j=0; j< n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
}