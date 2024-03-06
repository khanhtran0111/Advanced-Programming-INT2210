#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int a[n+1];
    map<int, int> m;
    for(int i=1; i<= n; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(auto i: m){
        if(i.second == 2){
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";
    return 0;
}
