#include <iostream>
#include <iomanip>
#include <fstream>
#include "list.h"

using namespace std;

linkedList::linkedList()
{
	head = NULL;
	current = NULL;
	temp = NULL;
	tail = NULL;
}
void linkedList::addNode(int addData)
{
	node* store = new node;
	store-> link = NULL;
	store-> data = addData;

	if(head != NULL)
	{
	current = head;
	while(current-> link != NULL)
	{
		current = current-> link;
	}
	current->link = store;
	}
	else
	{
	head = val;
	}
}
void linkedList::printList()
{
	setfill(' ');
	current = head;
	for(int i =0; i<20; i++)
	{
	for(int j = 0; j<5; j++)
		{
		cout<<left<<setw(8)<< current->data;
		current = current->link;
		}
		cout<<endl;
	}
}
void linkedList::displayNode()
{
	int input;
	current = head;

	cout <<"Select any item by numerical position "<<endl;
	do{
	cout<<"input: ";
	cin >> input;
	}
	while(input < 0 || input > 100);

	for(int i= 0; i<input-1; i++)
	current= current->link;

	for(int j=0; j<100-1; j++)
	tail = current->link;

	cout <<endl<<"Item at position: "<<input<<endl;
	cout <<"node points to "<<current->data<<endl;
	cout <<"node is at "<<current<<endl<<endl;

	cout <<"--------------------------"<<endl;
	cout << "Head is at "<< head<<endl;
    cout << "Head data:"<< head->data<<endl<<endl;

	cout << "Tail is at "<< tail<<endl;
	cout << "Tail data:"<< tail->data<<endl<<endl;
	cout <<"--------------------------"<<endl;


}

linkedList::~linkedList()
{
}
