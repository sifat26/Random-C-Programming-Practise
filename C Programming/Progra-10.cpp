#include<iostream>
using namespace std;
class Complex{
    public:
int real,img;

void setValue(){
cin>>real>>img;
}

void sum(Complex c1,Complex c2){

real=c1.real+c2.real;
img=c1.img+c2.img;
}
void sub(Complex c1,Complex c2){

real=c1.real-c2.real;
img=c1.img-c2.img;
}
void mul(Complex c1,Complex c2){

real=(c1.real*c2.real-c1.img+c2.img);
img=(c1.real*c2.img)+(c2.real*c1.img);
}
void div(Complex c1,Complex c2){

real=(c1.real*c2.real-c1.img+c2.img);
img=(c1.real*c2.img)+(c2.real*c1.img);
}

void display(){
cout<<"Value="<<real<<"+"<<img<<"i"<<endl;
}


};
int main(){
Complex c1,c2,c3;
c1.setValue();
c2.setValue();
c3.sum(c1,c2);
c3.display();
c3.sub(c1,c2);
c3.display();
c3.mul(c1,c2);
c3.display();
}
