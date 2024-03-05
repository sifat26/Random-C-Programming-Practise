#include<iostream>
using namespace std;
class One{
public:
int x;
char c;
void setX(int a){
x=a;
}
void setA(char a){
c=a;
}
void getX(){
cout<<"X="<<x<<endl;
}
void getA(){
cout<<"Y="<<c<<endl;
}
};
int main(){
One ob;
ob.x=10;
ob.c='a';
ob.getX();
ob.getA();
ob.setX(100);
ob.setA('C');
ob.getX();
ob.getA();
}
