#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    char pre = '0';
    int dif = 0;
    int same = 0;
    int ans = 0;
    bool e;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        if(c != pre){
            e = false;
            dif++;
            same = 1;
        }
        else{
            same++;
        }
        if(!e && same >= 2){
            ans++;
            e = true;
        }
        pre = c;
    }
    ans += ((dif - 1) * dif / 2);
    cout << ans;
    return 0;
}