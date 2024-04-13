#include<bits/stdc++.h>
//#define int long long
#define speed ios_base::sync_with_stdio(0); cin.tie(0);

#define fi first
#define se second
#define taskname ""
using namespace std;
const int maxn=1e5+10;
const int mod=1e9+7;

struct Point{
    int x, y;
};

void increase1(Point p){
    p.x++;
    p.y++;
}

void increase2(Point &p){
    p.x++;
    p.y++;
}

void print(Point p){
    cout<<p.x<<" "<<p.y;
}

signed main()
{
    if(ifstream(taskname".inp"))
    {
        freopen(taskname".inp", "r", stdin);
        freopen(taskname".out", "w", stdout);
    }
    speed
    Point p1, p2;
    p1.x=1;
    p1.y=2;
    p2.x=1;
    p2.y=2;
    increase1(p1);
    increase2(p2);
    print(p1);
    cout<<'\n';
    print(p2);
    return 0;
}
