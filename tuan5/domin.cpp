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
	int n, m;
    cin>>n>>m;
    char c[n+5][m+5];
    char a[n+5][m+5];
    for(int i=1; i<= n; i++){
        for(int j=1; j<= m; j++){
            cin>>c[i][j];
            if(c[i][j] == '*') a[i][j] = '*';
        }
    } 
    for(int i=1; i<= n; i++){
        for(int j=1; j<= m; j++){
            int dem=0;
            if(c[i][j] == '.'){
                if(c[i-1][j-1] =='*') dem++;
                if(c[i-1][j] =='*') dem++;
                if(c[i-1][j+1] =='*') dem++;
                if(c[i][j-1] =='*') dem++;
                if(c[i][j+1] =='*') dem++;
                if(c[i+1][j-1] =='*') dem++;
                if(c[i+1][j] =='*') dem++;
                if(c[i+1][j+1] =='*') dem++;
                a[i][j] = (char)(dem + '0');
            }
            
        }
    }
    for(int i=1; i<= n; i++){
        for(int j=1; j<= m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
}