#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n, m;
    cin>>n>>m;
    int top = 0;
    int bot = n-1;
    int left = 0;
    int right = m-1;
    int direction = 0;
    int num = 1;
    vector<vector<int>> a(n, vector<int>(m));
    while(top <= bot && left <= right){
        if(direction == 0){
            for(int i=left; i<= right; i++){
                a[top][i] = num;
                num++;
            }
            top++;
        }
        else if(direction == 1){
            for(int i=top; i<= bot; i++){
                a[i][right] = num;
                num++;
            }
            right--;
        }
        else if(direction == 2){
            for(int i=right; i>= left; i--){
                a[bot][i] = num;
                num++;
            }
            bot--;
        }
        else if(direction == 3){
            for(int i=bot; i>= top; i--){
                a[i][left] = num;
                num++;
            }
            left++;
        }
        direction = (direction + 1 )%4;
    }
    for(int i=0; i< n; i++){
        for(int j = 0; j< m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
}