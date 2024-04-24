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
    move(ship);
    display(ship);
    return 0;
}