#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int a[n+5];
    int mi=INT_MAX;
    int ma=INT_MIN;
    int tongc=0;
    int deml=0;
    for(int i=1; i<= n; i++){
        cin>>a[i];
        mi=min(mi, a[i]);
        ma=max(ma, a[i]);
        if(a[i] % 2 == 0) tongc+=a[i];
        else deml++;
    }
    cout<<ma<<'\n'<<mi<<'\n'<<tongc<<'\n'<<deml;
    return 0;
}