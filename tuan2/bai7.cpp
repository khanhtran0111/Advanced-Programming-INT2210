#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pre = -n;
    while(true){
        if(n != pre) cout << n << ' ';
        if(n < 0) break;
        int x; cin >> x;
        pre = n;
        n = x;
    }
    return 0;
}