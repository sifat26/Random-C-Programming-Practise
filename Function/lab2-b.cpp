#include<iostream>
using namespace std;
class Two{
    public:
    int x;
    char a;
    void getx()
    {
        cin>>x;
    }
    void geta()
    {
        cin>>a;
    }
    void setx()
    {
        cout<<x<<endl;
    }
    void seta()
    {
        cout<<a<<endl;
    }

};
int main()
{
    Two M;
    M.getx();
    M.geta();

    M.setx();
    M.seta();
}
