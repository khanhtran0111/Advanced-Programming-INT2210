#include<bits/stdc++.h>
#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=998244353 ;
 
int a[maxn];

void lmao(int a[], int n){
    for(int i=1; i<= n-2; i++){
        for(int j=i+1; j<= n-1; j++){
            for(int k=j+1; k<= n; k++){
                if((a[i] + a[j] + a[k]) % 25 == 0){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<'\n';
                }
            }
        }
    }
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
    for(int i=1; i<= n; i++){
        a[i] = rand()%50;
    }
    for(int i=1; i <= n; i++) cout<<a[i]<<" ";
    cout<<'\n';
    lmao(a, n);
    return 0;
}