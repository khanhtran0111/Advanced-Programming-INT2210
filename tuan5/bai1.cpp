#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int a[n+5];
    double tb=0;
    double ps=0;
    for(int i=1; i<= n; i++){
        cin>>a[i];
        tb+=a[i];
    }
    tb/=n;
    for(int i=1; i<= n; i++){
        ps += (a[i] - tb)*(a[i] - tb);
    }
    ps/=n;
    cout<<fixed<<setprecision(2)<<tb<<'\n'<<ps;
    return 0;
}