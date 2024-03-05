#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	char lang[15];
	int i=1;
	while(gets(lang))
    {
	if(strcmp(lang,"HELLO")==0)
		cout<<"Case "<<i<<": ENGLISH"<<endl;
	else if(strcmp(lang,"HOLA")==0)
		cout<<"Case "<<i<<": SPANISH"<<endl;
	else if(strcmp(lang,"HALLO")==0)
		cout<<"Case "<<i<<": GERMAN"<<endl;
	else if(strcmp(lang,"BONJOUR")==0)
		cout<<"Case "<<i<<": FRENCH"<<endl;
	else if(strcmp(lang,"CIAO")==0)
		cout<<"Case "<<i<<": ITALIAN"<<endl;
	else if(strcmp(lang,"ZDRAVSTVUJTE")==0)
		cout<<"Case "<<i<<": RUSSIAN"<<endl;
else if(strcmp(lang,"#")==0)
		return 0;
		else
		cout<<"Case "<<i<<": UNKNOWN"<<endl;
		i++;
    }
	return 0;
}
