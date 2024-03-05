#include<iostream>
#include<cmath>
using namespace std;
class Triangle {
    public:
int firstSide,seconSide,thirdSide;
Triangle(int first,int second,int third){
    if(first+second>third && second+third>first && first+third>second){
        firstSide=first;
        seconSide=second;
        thirdSide=third;
    }
    else
        cout<<"Not Triangle";
}
int getFirstSide(){
 return firstSide;
}
int getSecondSide(){
 return seconSide;
}
int getThirdSide(){
 return thirdSide;
}

double areaOfTriangle(){
double p=(firstSide+seconSide+thirdSide)/3;
return sqrt(p*(p-firstSide)*(p-seconSide)*(p-thirdSide));
}
};

int main(){
Triangle tr(20,10,25);
cout<<"FirstSide="<<tr.getFirstSide()<<" SecondSide="<<tr.getSecondSide()<<" ThirdSide="<<tr.getThirdSide()<<endl;
cout<<"Area="<<tr.areaOfTriangle();

}
