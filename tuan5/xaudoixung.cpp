#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname "bai4"
using namespace std;
const int maxn=1e5+10;
const int mod=1e9+7;
signed main()
{
    speed
	string s;
    cin>>s;
    string ss = s;
    reverse(s.begin(), s.end());
    if(s == ss) cout<<"Yes";
    else cout<<"No";
	return 0;   
}