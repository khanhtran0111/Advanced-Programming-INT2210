#include<bits/stdc++.h>
//#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=1e9+7;
//de quy
// int binary_search(int* a, int left, int right, int flag){
//     if(left <= right){
//         int mid = left + (right - left)/2;
//         if(a[mid] == flag) return mid;
//         if(a[mid] < flag) return binary_search(a, mid+1, right, flag);
//         return binary_search(a, left, mid-1, flag);

//     }
//     return -1;
// }

//cach binh thuong
int binary_search(int* a, int left, int right, int flag){
    while(left <= right){
        int mid = left + (right - left)/2;
        if(a[mid] == flag) return mid;
        else if(a[mid] < flag) left = mid+1;
        else right = mid - 1;
    }
    return -1;
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
    for(int i=0; i<n; i++) cin>>a[i];
    int flag;
    cin>>flag;
    int check = binary_search(a, 0, n-1, flag);
    cout<<check+1;
    return 0;
}
