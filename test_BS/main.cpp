#include <iostream>

using namespace std;

struct node{
    int data;
    node *link = NULL;
};

int main()
{

    int x;
    node *head = new node;
    node *start = new node;
    node *current = new node;

    head->link= start;
    head->data = 0;

    head->link->data=1;
    head->link->link= new node;
    head->link->link->data= 2;

    cout<< "Find a number in the list"<<endl<<"input= ";
    cin >>x;
    cout<<endl;

    current = head;
    int count =0;
    while(current!= NULL && current->data != x){
        current = current->link;
        count ++;}


    cout<<count<<endl<<current<<endl<<current->link<<endl<<current->data<<endl<<endl;

    cout<< "This is the created list"<<endl<<endl;

    count= 1;
    current = head;
    while(current!=NULL){
        cout<<"Node "<<count<<"."<<endl<<"current: "<<current<<endl;
        cout<<"Current Data: "<<current->data<<endl<<"Link: "<<current->link<<endl<<endl;
        current=current->link;
        count++;}
    return 0;
}
