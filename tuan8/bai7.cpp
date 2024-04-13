#include<bits/stdc++.h>
using namespace std;

struct Rect{
    int x, y;
    int w, h;
};

struct Ship{
    Rect rect;
    string id;
    double dx, dy;
};

void move(Ship& ship){
    ship.rect.x+= (int)ship.dx;
    ship.rect.y+= (int)ship.dy;
}

void display(const Ship& ship){
    cout<<ship.id<<'\n';
    cout<<ship.rect.x<<" "<<ship.rect.y<<'\n';
}

signed main(){
    int x, y, w, h;
    cin>>x>>y>>w>>h;
    string id;
    cin>>id;
    int dx, dy;
    cin>>dx>>dy;
    Ship ship;
    ship.rect={x,y,w,h};
    ship.id=id;
    ship.dx=dx;
    ship.dy=dy;
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    string idd;
    cin>>idd;
    int dxx, dyy;
    cin>>dxx>>dyy;;
    Ship ship2;
    ship2.rect ={a, b, c, d};
    ship2.id=idd;
    ship2.dx=dxx;
    ship2.dy=dyy;
    move(ship);
    display(ship);
    return 0;
}