/*
Barthelemy Peter
This is your program
Using random numbers
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //count is just a variable I declared
    //to control my while loops
    //That's what I mean when I say using a "counter"
    srand(time(0));
    int count = 0;

    int first[20];
    int second[20];
    int manip[20];
   // int val = rand() % 21;

    for(int i = 0; i < 20 ; i++)
        first[i]= rand()% 6 + 4;

    for (int i = 0; i < 20; i++)
        second[i]= rand () % 9 + 1;

    cout << "First array items"<< endl;

    while(count != 20)
    {
        cout<<first[count]<< " ";
        count++;
    }
    count = 0;
    cout <<endl<<endl<<"Second array items "<< endl;

    while(count != 20)
    {
        cout<<second[count]<< " ";
        count++;
    }
    cout << endl;

    for(int i = 0; i<20; i++)
    {
        manip[i]= first[i]*second[i];
    }

    cout <<endl<< "Manipulation array"<<endl;

    count = 0;
    while(count != 20)
    {
        cout<<manip[count]<< " ";
        count++;
    }
    cout << endl;
    return 0;
}
