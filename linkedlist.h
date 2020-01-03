/*
  Name: Hai Dang
  Email: goldsea5191@gmail.com
*/
#include <cstring>
#include <cctype>
#include <iostream>
#include <cstdlib>


//The data structure is a linear linked list of integers
//with a head AND tail pointer!
struct node
{
       int  data;
       node * next;
};

class list
{
     public:
             list();                /* Construct without parameter */
	     list(int data);        /* Construct with a node */
             ~list();
             void display();        /* Show the list */


             /******************************************************
	      * Useful method for list
             *******************************************************/
             void insert_tail(int new_data);   /* Insert a new value at tail  */
	     void insert_front(int new_data);  /* Insert a new value at front */

             node * get_head();                /* Get head node */
             node * get_tail();                /* Get tail node */
	     int get_size();                   /* Get total element in list */

             bool find_item(int item_to_find); /* Find an item in list */

	     /******************************************************
	      * Overloading method for list
             *******************************************************/
	     int operator*();                  /* Returns the info contained in the node. */
	     /* Overload the pre-increment operator.
	        The iterator is advanced to the next node. */
	     void operator++();


    private:
        // Notice there is BOTH a head and tail pointer
        //Make sure to keep both properly maintained
        node * head;
	node * tail;
	int total;      /* Total element in a list */
};
