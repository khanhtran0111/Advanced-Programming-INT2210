#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
//10 sang 2
vector<int> tentotwo(int n){
    vector<int> bin;
    while(n > 0){
        bin.push_back(n%2);
        n/=2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

//2 sang 10
int twototen(string s){
    int n=0;
    int p=s.size()-1;
    for(char c:s){
        n+=(c-'0')*pow(2, p);
        p--;
    }
    return n;
}

signed main()
{
    if(ifstream(taskname".inp")) 
    {
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
    int n;
    cin>>n;
    vector<int> s = tentotwo(n);
    for(int c : s) cout<<c;
    return 0;
}