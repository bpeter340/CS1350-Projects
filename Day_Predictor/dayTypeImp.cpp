//Imp file defines functions

#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;


string dayType::getDay(int option)
{	
	return week[option-1];
}

string dayType::nextDay(int next)
{
	//error check for Sunday
	if (next == 7)
	return week[0];
	else
	return week[next];
}

string dayType::prevDay(int prev)
{
	// error check for Saturday
	if (prev == 1)
	return week[6];
	else
	return week[prev-2];
}

void dayType::predictDay(int current_day, int prediction)
{	
	int check;

	//Prediction
	check = (current_day-1)+prediction;
	
	if (check >= 7)
	xday = week[(check%7)];
	else
	xday = week[check];

	cout <<endl<<week[current_day-1] <<" + "<<prediction<< " days = " << xday <<endl<<endl;
}

void dayType::menu()
{
	for(int i = 1; i <= 7; i++)
	cout <<i<<". "<<week[i-1]<<endl;
}

dayType::dayType(string day_1, string day_2, string day_3, string day_4, string day_5, string day_6, string day_7)
{
	week[0]= day_1;
	week[1]= day_2;
	week[2]= day_3;
	week[3]= day_4;
	week[4]= day_5;
	week[5]= day_6;
	week[6]= day_7;
	xday = "";
}

