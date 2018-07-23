#include <iostream>
#include <fstream>
#include "list.h"
#include <string>
#define  MAX 11


using namespace std;

int main()
{
    string a;

    cout<<"How many integers would you like in this tree? "<< a<<endl;
    int y;
    BST test;

    do{
    cout<<"input: ";
    cin >> y;
    }
    while(y < 0 || y > 20429);

    cout<<endl<<"This is the original list"<<endl;
    test.original(y);

    test.input(y);

    cout<<endl<<endl<<endl<<"Inorder sequence"<<endl;
    test.printInOrder();

    cout<<endl<<endl<<"Postorder sequence"<<endl;
    test.printPostOrder();

    cout<<endl<<endl<<"Preorder sequence"<<endl;
    test.printPreOrder();

    cout << endl;


    return 0;
}
