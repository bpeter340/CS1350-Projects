// Use File the actual implementation
/*
Barthelemy Peter
09/15/17
Cs1350
This progam manipulates an array of the days of the week
utilizing the class data type
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "dayType.h"

using namespace std;

int main()
{	
	dayType manip("Sunday","Monday", "Tuesday", "Wednesday","Thursday", "Friday", "Saturday");
	
	int day;
	int added;
	char border = '-';
	string week[7];

	cout <<endl<< "What day is it?"<<endl<<"To select a day, enter" << endl;

	//Menu
	manip.menu();
	cout << endl;

	//error check for negatives and number greater than 7
	do
	{
	cout << "input: ";
	cin >> day;
	}
	while(day < 1 || day > 7);

	cout<<setfill('-')<<endl;
	cout<<setw(25)<<border<<endl;
	cout<<"The set day is " <<manip.getDay(day)<<endl<<endl;
	cout<<"The next day will be "<<manip.nextDay(day)<<endl<<endl;
	cout<<"The previous day was "<<manip.prevDay(day)<<endl;
	cout<<setw(25)<<border<<endl<<endl;
	
	cout<<"Enter a positive integer to predict the future" <<endl;
	
	//error check for negative value
	do
	{
	cout << "input: ";
	cin >> added;
	}
	while(added < 0);

	manip.predictDay(day, added);
	

	return 0;
}
