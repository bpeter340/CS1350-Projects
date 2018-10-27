# CS1350-Projects
**This repository is currently under construction until further notice but currently contains _only a few of the projects I've completed_ in CS1350 at Indiana Tech.**

## Bin Search Tree

###### Bin Search Tree Objective

Implement a binary search tree which can be traversed using the three main traversal methods. The input for this tree should be read in from a text file.

- [x] Preoder Traversal
- [x] Inorder Traversal
- [x] Postorder Traversal

Additional functionality I gave to this application was the ability of the user to choose the amount of leaves the tree contained.

## Day_Predictor
###### Day_Predictor Objective
Design a program, using classes, that is able to perform the following operations on the days of the week.

- [x] Assign an index that prints the current day
- [x] Return previous day
- [x] Return current day
- [x] Return next day
- [x] Allow a user to add an integer vaulue to the current index of the days of the week to determine what day the new index falls upon


## Design Document
Classes offer a more secure method to code programs because they the give user less access to sensitive information. Design a program that manipulates the days of the week so that the user can assign and print the day, return the previous, current, and next day, be able to predict the future, all while using appropriate classes, files, and constructors. 
  
###### UML
        +	string getDay(int option);
        +	string nextDay(int next);
        +	string prevDay(int prev);
        +	void predictDay(int current_day, int prediction);
        +	void menu();
        +	dayType(string day_1, string day_2, string day_3, string day_4, string day_5, string day_6, string day_7);
        +	~dayType();
        -	string week[7];
        -	string xday;

        
Pre-conditions:
-	Using the class data type
-	User follows instruction
-	Program utilizes user input to manipulate array of weeks

Post-conditions:
-	Set day can be manipulated to find previous and next day
-	Gathered data can be returned and printed to the screen
-	Set day can be manipulated to find any day of the week X amount of days in the future


## Basic_linkedList
###### Basic_linkedList Objective

Create a linked list that stores 100 integers which are read in from a text file.

- [x] Display the list in 5 columns

## Design Documents
Design and implement a class node to use to implement a linked list containing one hundred integers. Data should be read from a file. Manipulate the list so that it can be printed in 5 columns. User input is required for further manipulation of the program because they should be able to display the node of any item in the list. 
 
###### UML 
        + void addNode(int addData)    
        + void printList()
        + void displayNode()
        + linkedList()
        + ~linkedList()
        - struct node{
        - int data
        - node* link }
        - node* tail
        - node* head
        - node* current
        - node* temp 
 
 
