#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int dem[10];
    memset(dem, 0, sizeof(dem));
    for(int i=1; i<= n; i++){
        string x;
        cin>>x;
        for(int j=0; j<(int)x.size(); j++){
            dem[x[j] - '0']++;
        }
    }
    for(int i=0; i<=9; i++) cout<<dem[i]<<'\n';
    return 0;
}