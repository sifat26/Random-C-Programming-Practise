
#include <bits/stdc++.h>
#include <fstream>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include<ctime>
using namespace std;
char notif[100000],cc;
struct chairman
{
    string fname;
    string lname;
    string designation;
    string gmail;
    string department;
} cData;
struct teacher
{
    string fname;
    string lname;
    string designation;
    string gmail;
    string department;
} tData;
struct staff
{
    string fst_name;
    string lst_name;
    string addrs;
    string cel_no;
    string service;
} stf[50];

int main()
{
    int i=0,j;
    char choice;
    string find;
    string srch;
    while(1)
    {
        system("color 57");
        cout<<"\n\n\n\t\t\t Welcome!"<<endl;
        cout<<"\n\t\t\tICT Department \n\n";
//cout<<"\n\n";
        time_t now=time(0);
        char* dt=ctime(&now);
        cout <<"\t\t\t"<<dt<<endl;
        cout<<"\t1.Chairman information"<<endl;
        cout<<"\t2.Teacher's information"<<endl;
        cout<<"\t3.ICT Office staff's information"<<endl;
        cout<<"\t4.Notification!!"<<endl;
        cout<<"\t5.Exit program"<<endl;
        cout<<"\tEnter your choice: ";
        cin>>choice;
        cout<<"\n\n\n";
        system("color 3e");
        switch(choice)
        {
        case '1':
        {
            while(1)
            {
                system("color 4e");
                system("cls");
                cout<<"\t\t\tChairman INFO\n\n\n";
                cout<<"\t1.Create new chairman info.\n";
                cout<<"\t2.Show info.\n";
                cout<<"\t3.Jump to main\n";

                cout<<"\tEnter your choice: ";
                cin>>choice;
                switch (choice)
                {
                case '1':
                {
                    ofstream f1("chairman.txt",ios::app);
                    for( i=0; choice!='n'; i++)
                    {
                        if((choice=='y')||(choice=='Y')||(choice=='1'))
                        {
                            cout<<"\n\tYou can't use space to enter any information!!!\n";
                             cout<<"\tEnter department name: ";
                            cin>>cData.department;

                            cout<<"\tEnter First name: ";
                            cin>>cData.fname;
                            cout<<"\tEnter Last name: ";
                            cin>>cData.lname;
                            cout<<"\tEnter Designation: ";
                            cin>>cData.designation;
                            cout<<"\tEnter gmail: ";
                            cin>>cData.gmail;
                           f1<<cData.department<<endl;
                            f1<<cData.fname<<endl<<cData.lname<<endl<<cData.designation<<endl<<cData.gmail<<endl;
                            cout<<"\tPress Y for Continue and n to Finish: ";
                            cin>>choice;
                        }
                    }
                    system("cls");
                    f1.close();
                }
                continue;

                case '2':
                {
                    ifstream f2("chairman.txt");

                  cout<<"\tEnter Department Name: ";
                    cin>>find;
                    cout<<endl;
                    int notFound = 0;
                    for( j=0; (j<i)||(!f2.eof()); j++)
                    {
                        getline(f2,cData.department);
                        if(cData.department==find){

                            notFound = 1;
                            cout<<"\tDepartment of: "<<cData.department<<endl;
                            cout<<"\tName: "<<cData.fname;
                            cout<<" "<<cData.lname;
                            cout<<"("<<cData.designation<<")"<<endl;
                            cout<<"\tGmail: "<<cData.gmail<<endl;
                        }
                    }
                    f2.close();
                    if(notFound == 0)
                    {
                        cout<<"\tNo Record Found!!"<<endl;
                    }
                    cout<<"\tPress any key to proceed";
                    getch();
                }
                continue;
                case '3':
                {
                    system("cls");
                    break;
                }
                }

                break;
            }
            continue;
        }
        case '2':
        {
            while(1)
            {
                system("color 4e");
                system("cls");
                cout<<"\t\t\tTeacher's INFO\n\n\n";
                cout<<"\t1.Create new Teacher's info.\n";
                cout<<"\t2.Show info.\n";
                cout<<"\t3.Jump to main\n";

                cout<<"\tEnter your choice: ";
                cin>>choice;
                switch (choice)
                {
                case '1':
                {
                    ofstream t("teacher.txt",ios::app);
                    for( i=0; choice!='n'; i++)
                    {
                        if((choice=='y')||(choice=='Y')||(choice=='1'))
                        {
                            cout<<"\n\tYou can't use space to enter any information!!!\n";
                            cout<<"\tEnter department name: ";
                            cin>>tData.department;
                            cout<<"\tEnter First name: ";
                            cin>>tData.fname;
                            cout<<"\tEnter Last name: ";
                            cin>>tData.lname;
                            cout<<"\tEnter Designation: ";
                            cin>>tData.designation;
                            cout<<"\tEnter gmail: ";
                            cin>>tData.gmail;
                           t<<tData.department<<endl;
                            t<<tData.fname<<endl<<tData.lname<<endl<<tData.designation<<endl<<tData.gmail<<endl;
                            cout<<"\tPress Y for Continue and n to Finish: ";
                            cin>>choice;
                        }
                    }
                    system("cls");
                    t.close();
                }
                continue;
                 case '2':
                {
                    ifstream t("teacher.txt");

                    cout<<"\tEnter Department Name: ";
                    cin>>find;
                    cout<<endl;
                    int notFound = 0;
                    for( j=0; (j<i)||(!t.eof()); j++)
                    {
                        getline(t,tData.department);
                        if(tData.department==find) {
                            notFound = 1;
                            cout<<"\tDepartment of: "<<tData.department<<endl;
                            cout<<"\tName: "<<tData.fname;
                            cout<<" "<<tData.lname;
                            cout<<"("<<tData.designation<<")"<<endl;
                            cout<<"\tGmail: "<<tData.gmail<<endl;
                        }
                    }
                    t.close();
                    if(notFound == 0)
                    {
                        cout<<"\tNo Record Found!!"<<endl;
                    }
                    cout<<"\tPress any key to proceed";
                    getch();
                }
                continue;
                case '3':
                {
                    system("cls");
                    break;
                }
                }

                break;
            }
            continue;
        }




        case '3':
        {
            while(1)
            {
                system("color 8e");
                system("cls");
                cout<<"\t\t\tICT office Staff's INFORMATION SECTION\n\n\n";
                cout<<"\t1.Create new entry\n";
                cout<<"\t2.Find and display\n";
                cout<<"\t3.Jump to main\n";
                cout<<"\tEnter your choice: ";
                cin>>choice;
                switch (choice)
                {
                case '1':
                {
                    ofstream t1("staff.txt",ios::app);
                    for(i=0; choice!='n'&& choice!='N'; i++)
                    {
                        if((choice=='y')||(choice=='Y')||(choice=='1'))
                        {
                            cout<<"\n\tYou can't use space to enter any information!!!\n";
                            cout<<"\tEnter First name: ";
                            cin>>stf[i].fst_name;
                            cout<<"\tEnter Last name:: ";
                            cin>>stf[i].lst_name;
                            cout<<"\tEnter his/her address: ";
                            cin>>stf[i].addrs;
                            cout<<"\tEnter Phone Number: ";
                            cin>>stf[i].cel_no;
                            cout<<"\tEnter his\her RANK: ";
                            cin>>stf[i].service;

                            t1<<stf[i].service<<endl<<stf[i].fst_name<<endl<<stf[i].lst_name<<endl
                              <<stf[i].addrs<<endl<<stf[i].cel_no<<endl;
                            cout<<"\tPress Y or 1 to continue & n to finish"<<endl;
                            cin>>choice;
                        }
                    }
                    system("cls");
                    t1.close();
                }
                continue;
                case '2':
                {
                    ifstream t2("staff.txt");
                    cout<<"\tstaff's information: ";
                    cout<<"\tEnter service name: ";
                    cin>>find;
                    cout<<endl;
                    int notFound = 0;
                    for( j=0; ((j<i)||(!t2.eof())); j++)
                    {
                        getline(t2,stf[j].service);
                        if(stf[j].service==find)
                        {
                            notFound = 1;
//getline(t2,stf[j].service);
                            cout<<"\t"<<stf[j].service<<" class worker"<<endl;
                            getline(t2,stf[j].fst_name);
                            cout<<"\tFirst name: "<<stf[j].fst_name;
                            getline(t2,stf[j].lst_name);
                            cout<<" "<<stf[j].lst_name<<endl;
                            getline(t2,stf[j].addrs);
                            cout<<"\tAddress: "<<stf[j].addrs<<endl;

                            getline(t2,stf[j].cel_no);
                            cout<<"\tPhone Number: "<<stf[j].cel_no<<endl;
                        }
                    }
                    t2.close();
                    if(notFound == 0)
                    {
                        cout<<"\t\tNo Record Found"<<endl;
                    }
                    cout<<"\tPress any key to proceed";
                    getch();
                }
                continue;
                case '3'://Jump to main
                {
                    system("cls");
                    break;
                }
                }
                break;
            }
            continue;
        }
        case '4':
            system("cls");
            cout<<"\tPress 1 to enter information\n";
            cout<<"\tPress 2 for new notification\n";
            cout<<"\tEnter your choice: ";

            {

                while(1)
                {


                    time_t tt;
                    struct tm*ti;
                    cin>>cc;
                    switch (cc)
                    {

                        cout<<"****\t\n";
                    case '1':
                    {


                        cout<<"\n\nEnter your massages!!!\n";
                        cin.ignore();
                        gets(notif);
                        time(&tt);
                        ti=localtime(&tt);

                        break;
                    }
                    case '2':
                    {

                        cout<<"\n\tNew Notification !!! ";
                        puts(notif);
                        cout<<"\t~~~"<<asctime(ti);

                    }
                    }

                    break;
                }
                system("cls");
                continue;
            }
        case '5':
        {
            cout<<"\nThank You"<<endl;
            break;
        }
        }
        break;
    }
}
