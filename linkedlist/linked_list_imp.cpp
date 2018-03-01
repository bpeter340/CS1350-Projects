
// Class implementation file: linklist.cpp

// Implementation of class defined in linked_list.h

// This class can be used to create and maintain an unsorted
// linked list of data as defined in element.h. The list node
// form is defined in list_node.h (implemented in list_node.cpp).

 #include <assert.h>            // used to test list consistancy
 #include "linked_list.h"       // this class header file
 #include "list_node.h"

// Class constructor - sets the object that the client is declaring
// to be the empty list
  list::list()
   {
       // list is empty
       // to be safe initialize current
       // & previous
       head = NULL;
       previous = NULL;
       current= NULL;
   }

// Copy constructor - copies lst to the new object that the client
/*/ is declaring
   list::list(list& lst)
   { // start of copy constructor
 / // Create a temporary pointer to follow the parameter lst
     list_node* newNode= new list_node;
     list_node *temp = new list_node;
	temp = lst.head;
	head = temp;
	previous = current;
	current = head;
      if (temp != NULL) // there is a list to copy
      {
      // set receiver's current to point to new node
         current->put_next(newNode);

      // set new node's data to lst's data
         newNode->put_item(current->get_item());

      // initialize new node's next field
         newNode->put_next(NULL);;

      // receiver's head pointer must point to new node
         head->put_next(newNode);

      // move temp to next node in lst
         temp= temp->get_next();

      // as long as there are more nodes in lst
         while (temp != NULL)
         {
         // make current node's next field point to a new node
            current->put_next(newNode);

         // make current point to the new node
            current= current->get_next();

         // set current node's data
            current->put_item(current->get_item());

         // set current node's next field
            current->put_next(NULL);

         // advance temp to next node
            temp= temp->get_next();
         } // end while
      } // end if
      else      // there is no list to copy, so head is NULL:
         head = NULL;

   }*/    // end of copy constructor

// Destructor - removes all the receiver's list_node's from memory
// freeing memory space for other uses
   list::~list()
   {
   // make all pointers point to the first node
   head= NULL;
   previous = head;
   current = head;

   // as long as there are more nodes to delete
     while (current != NULL)
      {
      // move current to point to next node
         previous = current;
	 current= current->get_next();

      // remove the previous node from memory
	 delete previous;

      // advance previous to next node
         previous = current->get_next();
      }

   // set all pointers to NULL - list is empty
      current = NULL;
      head= NULL;
      previous= NULL;

   } // end of destructor

// Add a new item to the end of the list
   void list::append(const element &item)
   {
	list_node *newNode = new list_node(item);
      if (empty()) // then make a new node and point head at it
      {
       	 head = newNode;


      }
      else // must find end of list and addd new item
      {
         // start at beginning of list
	current = head;
      // not at end of list keep moving
         while (current->get_next() != NULL)
            current = current -> get_next();

      // now current points at last node in list
      // make next field point to a new node
         current->put_next(newNode);


      // make current point to new node
         current = newNode;
      // set current node to new value


      // mark new node as last node in list
	newNode->put_next(NULL);
       }

   }

// recursive insert - recalls itself passing a pointer to the next node (list)
// this is private to the class
   void insrt(list_node *lst, const element &item)
   {
      if (lst != NULL) // then not at the end of the list - terminal condition
         if (item > lst->get_item()) // then the new item goes farther down the list - other terminal condition
         {
            insrt(lst->get_next(), item); // recursive call
                // on return put the new item in the list
            if ((lst->get_next() == NULL) ||
               (item < lst->get_next()->get_item())) // then new item goes here
            { // create a new node and hook it up
               list_node *current = new list_node;
               current->put_item(item);
               current->put_next(lst->get_next());
               lst->put_next(current);
            }
	else
	insrt(lst,item);
         // otherwise item has been inserted previously so just return again
         }
   }

// public insert function
   void list::insert(const element &item)
   {
    list_node * newNode = new list_node(item);
    //list_node * temp = new list_node();

    if (empty()) // then new item starts the list
      {

      head = newNode;
      current = head;

      }
      else // it may be a new first item in the list
   	{
         if (head->get_item() >= item) // then new item is the new first
         {
        head = newNode;
        head->put_next(current);
        current= head;

         }

         else // the item goes somewhere further down the list
        {
        while(current->get_next() != NULL)
        current = current->get_next();

        current->put_next(newNode);
        newNode->put_next(NULL);


        }
    }
    }


// Implement utility functions
// Test for empty list
   bool list::empty()
   {
      if(head == NULL)
	return true;
      else
	return false;
        // if head is NULL, list is empty
   }

// Test for end of list
   bool list::at_end()
   {
   // if list is empty, must be at end OR
   // if current point to last node then at end of list
    if(empty() || current->get_next()== NULL)
	  return true;

    else if (current->get_next() == NULL)
      return true;
    else
      return false;
      //return ((head == NULL) || ((current != NULL) &&
         //(current->get_next() == NULL)));
   }

   void list::move_to_next()
   {
   // check current so that illegal reference is not made
      if (current != NULL)
 // advance cuurent
	current = current->get_next();

   }

   void list::move_to_start()
   {
   current = head;
   }

   element list::get_current()
   {
      assert(current != NULL);
      return current->get_item();
   }

// End of file linked_list.cpp

   list_node::list_node()
   {
   data ="";
   next = NULL;
   }

   list_node::list_node(const element &item)
   {
   data = item;
   next = NULL;
   }

   void list_node::put_item(const element &item)
   {
   data = item;
   }

   void list_node::put_next(list_node *ptr)
   {
   next = ptr;
   }

   element list_node::get_item()
   {
   return data;
   }

   list_node *list_node::get_next()
   {
   return next;
   }
