#include<iostream>
using namespace std;
int main()
{
    int a,b,num1,num2,rem;
    cin>>a>>b;
     num2=(a>b)?a:b;
     num1=(a<b)?a:b;
     cout<<num1<<endl;
     cout<<num2<<endl;
        while(num2!=0) {
            rem = num1 % num2;
            num1 = num2;
            num2 = rem;
        }
        cout<<num1<<endl;
}
