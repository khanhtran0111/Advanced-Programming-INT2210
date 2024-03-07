#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
};

struct Rect{
    int x, y, w, h;
    bool contains(const Point& point){
        if(point.x >= x && point.x <= x+w && point.y >= y && point.y <= y+h) return true;
        else return false;
    }
};

signed main(){
    int x, y, w, h;
    cin>>x>>y>>w>>h;
    int xx, yy;
    cin>>xx>>yy;
    Rect myrect = {x, y, w, h};
    Point mypoint={xx, yy};
    if(myrect.contains(mypoint)) cout<<"yes";
    else cout<<"no";
    return 0;
}