
#include <iostream>
#include<string>
using namespace std;


// Update Program 1 here.

class Teacher{
	string Tname;
	public:
		Teacher(string nam){
			Tname=nam;
		}
		string getName(){
			return Tname;
		}
};

class Department{
	Teacher *t;
	string Dname;
	public:
 Department(){}
	void add(Teacher *TT){
		t=TT;
		Dname+=t->getName();
	}
	~Department(){
	    cout<<"Software Enf Department: "<<Dname<<endl;
	}
};
 int main()
{
// Create a teacher outside the scope of the Department
Teacher *t1 = new Teacher(" Ali"); // create a teacher
Teacher *t2 = new Teacher(" Abu");
Teacher *t3 = new Teacher(" Alyssa");

{
// Create a department and use the constructor parameter to pass the teacher to it.
Department dept; // create an empty Department
dept.add(t1);
dept.add(t2);
dept.add(t3);

} // dept goes out of scope here and is destroyed

cout << t1->getName() << " still exists!\n";
cout << t2->getName() << " still exists!\n";
cout << t3->getName() << " still exists!\n";

delete t1;
delete t2;
delete t3;
return 0;
}
