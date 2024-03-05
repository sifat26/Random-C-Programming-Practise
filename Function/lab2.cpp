#include<iostream>
using namespace std;
class One
{
public:
    int x,y;
    void getx(int p)
    {
       p=x;
    }
    void gety(int q)
    {
        q=y;
    }
    void display()
    {
        cout<<"X="<<x<<endl<<"Y="<<y<<endl;
    }

};
int main()
{
    One s;
    cin>>s.x>>s.y;
    s.getx(s.x);
    s.gety(s.y);
    s.display();
    return 0;
}
