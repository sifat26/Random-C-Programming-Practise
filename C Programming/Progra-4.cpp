#include<iostream>
using namespace std;
class Person{
public:
string name,age;
Person(string nm, string ag){
name=nm;
age=ag;
}
void setName(string nm){
    name=nm;
}
void setAge(string ag){
    age=ag;
}
string getName(){
    return name;
}
string getAge(){
    return age;
}
~Person(){
cout<<"\nDestructor Called";
}
};
int main(){
Person p("SMS","30");
cout<<"Name="<<p.getName()<<" Age="<<p.getAge()<<endl;
p.setName("Rahim");
p.setAge("30");
cout<<"Name="<<p.getName()<<" Age="<<p.getAge();
}
