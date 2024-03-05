#include<iostream>
using namespace std;
class One{
public:
int x,y;
void getX(){
cout<<"X="<<x<<endl;
}
void getY(){
cout<<"Y="<<y;
}
};
int main(){
One ob;
ob.x=10;
ob.y=20;
ob.getX();
ob.getY();
}
