#include <iostream>
#include <fstream>
#include <iomanip>

#include "linked_list.h"

using namespace std;

void print(list prt)
// print a list 10 items per line with the numbers aligned in columns
{
   short count = 1; // count the number of numbers printed
   prt.move_to_start(); // start at the beginning
   cout << setprecision(2) << fixed; // set floating point format
   while (!prt.at_end()) // loop until the whole list has been processed
   {
      if (prt.at_end())
         cout << "end of list" << endl;
      cout << setw(10) << prt.get_current() << " "; // print a number
      if (count++ % 10 == 0) // then 10 have been printed on this line
         cout << endl; // so end it
      prt.move_to_next(); // get ready for next number
   } // end while loop

} // end print

int main()
// test the linked list class
{
   list start;
   element data;
   ifstream in_file;
   short count; // column counter for print.

   // build a unordered list
      in_file.open("data.txt");
      in_file >> data;
      cout << endl << "building an unordered list " << data << endl;
      while (!in_file.eof()) // loop to the end of the file
      {
         start.append(data);
         in_file >> data;
      } // end while loop
      start.append(data);
      in_file.clear(); // clear file buffer for closing
      in_file.close(); // close file

      cout << "print original list" << endl;
      print(start);
      cout << endl <<endl<< "end of original list" << endl;
      getchar(); // wait for user

//      list last = start; // demonstrate use of  constructor

      cout << endl << "destroying original list" << endl;
      start.~list(); // explicitly call the list destructor

      cout <<endl<< "print destroyed list" << endl;
      print(start);
      cout << endl<< "end of destroyed list" << endl;
      getchar();

      cout << "print copied list" << endl;
//      print(last);
      cout << endl << "end of copied list" << endl;
      getchar();

   in_file.open("data2", ios::in); // reopen file
   in_file >> data;

   // build an ordered list
   cout << endl << "building an ordered list" << endl;
   while (!in_file.eof()) // loop until end of file
   {
      start.insert(data); // use the insert procedure to build an ordered list
      in_file >> data;
   } // end while loop
   start.insert(data);
   cout << "print ordered list" << endl;
   print(start);
   cout << endl << "end of ordered list" << endl;
   getchar();

   cout << endl << "use copy constructor" << endl;
  // list other = start; // declare a list with the copy constructor
   start.~list(); // explixitly delete the original list

   cout << "start list after calling destructor ~list" << endl;
   print(start); // print an empty list
   cout << "end of start list - should be empty" << endl;
   getchar();

   cout << endl << "print copied list" << endl;
//   print(other);
   cout << endl << "end of copied list " << endl;

   return 0;
}

