#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a + b <= c || b + c <= a || c+a <= b){
        cout<<"NO";
        return 0;
    }
    cout<<a+b+c<<'\n';
    if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
        cout<<"vuong";
        return 0;
    }
    else if(a == b && b == c){
        cout<<"deu";
        return 0;
    }
    else if(a == b || b == c || c == a){
        cout<<"can";
        return 0;
    }   
    else if(a*a > b*b + c*c || b*b > c*c + a*a || c*c > a*a + b*b){
        cout<<"tu";
        return 0;
    }
    else cout<<"nhon";
    return 0;
}