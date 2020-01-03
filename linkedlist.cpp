/*
    A simple class for linear linked list with a head, and tail pointer
*/
#include "linkedlist.h"
using namespace std;

/* Constructor */
list::list()
{
}

list::~list()
{
    /* Desstructure, no need to fill */
}

/* Construct with a node */
list::list(int data)
{
}

/* Display a list. and total element */
void list::display()
{
}

/* List insert a new value at tail in list */
void list::insert_tail(int new_data)
{
}

/* List insert a new value in list */
void list::insert_front(int new_data)
{
}


/* Get head */
node *list::get_head()
{
}

/* Get tail */
node *list::get_tail()
{
}

/* Get total element in list */
int list::get_size()
{
}


/* Return true if the requested item (sent in as an argument)
is in the list, otherwise return false */
bool list::find_item(int item_to_find)
{
}

/* Overloading method*/
int list::operator*()
{
}

/* Overload the pre-increment operator.
   The iterator is advanced to the next node. */
void list::operator++()
{
}
