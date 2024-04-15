#include<bits/stdc++.h>
//#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=1e9+7;

int count_even(int* a, int n){
    int dem = 0;
    for(int i=0; i < n; i++){
        if(a[i] % 2 == 0) dem++;
    }
    return dem;
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
    int a[n+1];
    for(int i=0; i< n; i++) cin>>a[i];
    int dem1 = count_even(a, n);
    int dem_dau = count_even(a, 5);
    int dem_sau = count_even(a + n - 5, 5);
    cout<<dem1<<" "<<dem_dau<<" "<<dem_sau;
    return 0;
}
