#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname "bai4"
using namespace std;
const int maxn=1e5+10;
const int mod=1e9+7;

bool check(int n){
    string s = to_string(n);
    string ss = s;
    reverse(s.begin(), s.end());
    if(ss == s) return true;
    else return false;
}

int dem(int a, int b){
    int cc = 0;
    for(int i=a; i <= b; i++){
        if(check(i) == true) cc++;
    }
    return cc;
}

signed main()
{
	if(ifstream(taskname".inp")) 
	{
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
	int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<dem(a, b)<<'\n';
    }
	return 0;   
}