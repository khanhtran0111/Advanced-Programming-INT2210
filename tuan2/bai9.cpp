#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    int minx, miny;
    cin >> minx >> miny;
    int maxx = 0;
    for(int i = 1; i < n; i++){
        int a, b; cin >> a >> b;
        if(a < minx) minx = a;
        if(b < miny) miny = b;
    }
    cout << minx * miny;
    return 0;
}