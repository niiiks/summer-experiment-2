#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int x,y;
	char a;
	
	cout<< "package a: for P995/mo 10 hrs of access. additional hours are P20/hr."<<endl;
	cout<< "package b: for P1495/mo 20 hrs of access. additional hours are P10/hr."<<endl;
	cout<< "package c: for P1995/mo unlimited access."<< endl;
	cout<< "enter package: ";
	cin>> a;

	
	switch (a)
	{
		case'a':
		case'A':
		cout<< "enter number of hours: ";
		cin>> x;
		if (x<11)
		cout<<"your monthly total bill is:"<< 995<< endl;
		else if (x>10)
		cout<<"your monthly total bill is:"<< (x-10)*20 + 995 << endl;
		else
		cout<< "Invalid Input";
		break;
		
		case 'b':
		case 'B':
		cout<< "enter number of hours: ";
		cin>> x;
		if (x<21)
		cout<<"your monthly total bill is:"<<1495<< endl;
		else if (x>20)
		cout<<"your monthly total bill is:"<<(x-20)*10 +1495<< endl;
		else 
		cout <<"invalid input"; 
		break;
		
		case'c':
		case'C':
		cout << "enter number of hours:";
		cin>>x;
		cout<<"your monthly total bill is: "<< 1995<< endl;
		break;
		
		default:
		cout << "invalid input!" ;
		break;

	}
	
	_getch();
	return 0;
	
}
