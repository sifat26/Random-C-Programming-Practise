#include <iostream>
#include <cmath>
using namespace std;
class Zeller{
    public:
    int day,month,year;

    Zeller(int m, int day,int y){
    day=m;
    month=day;
    year=y;
    }

    Zeller(int m){
        if(m==1){
            month=13;
            year--;
            }
        else if(m==2){
            month=14;
            year--;
            }

    }
    void calculate(){
    int dayOfWeek = (day + (26 * (month + 1)) / 10 + year + year/ 4 - year / 100+ year/400) % 7;
    switch(dayOfWeek)
		{
			case 0: cout<<"Saturday"; break;
			case 1: cout<<"Sunday"; break;
			case 2: cout<<"Monday"; break;
			case 3: cout<<"Tuesday"; break;
			case 4: cout<<"Wednesday"; break;
			case 5: cout<<"Thursday"; break;
			case 6: cout<<"Friday";
		}
    }
};

int main()
{
	Zeller z(22, 10, 2017);
	Zeller z1(10);
	z.calculate();

	return 0;
}
