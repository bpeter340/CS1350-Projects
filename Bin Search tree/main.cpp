#include <iostream>
#include <fstream>
#include "list.h"
#include <string>
#define  MAX 11


using namespace std;

int main()
{

    cout<<"How many integers would you like in this tree? "<<endl;
    int input;
    BST test;

    do{
    cout<<"input: ";
    cin >> input;
    }
    while(input < 0 || input > 20429);

    cout<<endl<<"This is the original list"<<endl;
    test.original(input);

    test.input(input);

    cout<<endl<<endl<<endl<<"Inorder sequence"<<endl;
    test.printInOrder();

    cout<<endl<<endl<<"Postorder sequence"<<endl;
    test.printPostOrder();

    cout<<endl<<endl<<"Preorder sequence"<<endl;
    test.printPreOrder();

    cout << endl;


    return 0;
}
