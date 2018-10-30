#include <iostream>
#include <fstream>
#include "list.h"

using namespace std;

int main()
{
	int value = 0;

	linkedList manip;

        ifstream inFile;
        inFile.open("array.txt");

        for(int i = 1; i<=100; i++)
        {
                inFile >> value;
                manip.addNode(value);
        }
        inFile.close();

	manip.printList();
	cout <<endl;

	manip.displayNode();

	return 0;
}
