// Class definition file: linked_list.h

// Definition section

// Define the function and data required to implement an
// unsorted linked list of list_nodes. Objects of class
// "list" will point to the list of list_nodes. List
// functions are defined in this class, node functions
// are defined in the list_node class

#ifndef LINKED_LIST_H
#include "list_node.h"	// the node class header file

// Define list class
   class list
   {
   public:

     // Class constructors

      list();		// Construct an empty list
     // list(list& lst);	// Construct a copy of lst

     // Class destructor

      ~list();		// Remove all list_nodes from memory

     // Member functions

   // transformers
     // add a new node with item in its data
     // to end of the list
      void append(const element &item);

     // insert item into the list in logical order
      void insert(const element &item);

   // observers
      bool empty();	// Return TRUE is receiver is empty
   		// otherwise, FALSE
      bool at_end();	// Return TRUE if current is pointing
   			// at the last node, FALSE otherwise
   // iterators
      void move_to_next();	// advance current to point to next node

      void move_to_start();	// set current pointer to first element

      element get_current();	// return the current value in the list

   protected:

     // Data members

      list_node *head,		// points to first node
      *current,	// used to traverse list
      *previous;	// used to follow current
   }; // end of file linked_list.h

 #define LINKED_LIST_H
 #endif

// End of Class File: linked_list.h


