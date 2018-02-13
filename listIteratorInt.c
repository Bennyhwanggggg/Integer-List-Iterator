/*
  listIteratorInt.c : list Iterator ADT implementation
  Written by Kuan-Chun Hwang for COMP9024 18x1 UNSW
  Date: 14/12/2017
*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "listIteratorInt.h"

// Define Node structure. Doubly linked list has previous and next node.
typedef struct Node {
	int value;
	struct Node *prev;	// pointer to the previous node in the list
	struct Node *next;	// pointer to the next node in the list
} Node;

// Define iterator structure
typedef struct IteratorIntRep {
	int nitems;	// number of item in the list count
	Node *head; 	// pointer to head node

	// In the List iterator, there is no current element, the cursor position is defined by the position between pervious and next element. Therefore, cursor is defined by:
	Node *nextNode;
	Node *previousNode;

	// pointer to the last called value to be used in delete
	Node *last;
} IteratorIntRep;


// Create a new IteratorInt (private function)
static Node *newNode(int it){
	Node *new;	// Create a pointer variable called new
	new = malloc(sizeof(Node)); // allocate memory for new node in heap
	assert(new!=NULL);	// perform assert check
	new->value = it;	// assign data to the new node
	new->prev = new->next = NULL;	// assign NULL to both previous and next node.
	return new;
}

// Print the doubly linked list from head to tail. (private function)
void showLL(Node *head){
	Node *current = head; // make current point to head
	if(current != NULL){
		if(current->next != NULL){
			printf("%d->", current->value);
			showLL(current->next);
		} else {
			printf("%d\n", current->value);
		}
	}
}

// Create a new list iterator that can store integer values.
IteratorInt IteratorIntNew(){
	struct IteratorIntRep *it;	// Initialize pointer to structure
	it = malloc(sizeof(struct IteratorIntRep));	// allocate memory to heap
	assert(it!=NULL);
	it->nitems = 0;	//Set initial number of items to 0
	// Initialize with head, last, next, prev to NULL since it is empty
	it->head = NULL;
	it->last = NULL;
	it->nextNode = NULL;
	it->previousNode = NULL;
	return it;
}
	
	
// Move cursor to start of the list
void reset(IteratorInt it){
	it->previousNode = NULL;
	it->nextNode = it->head;
}

// Add a value v to the current cursor position.
int add(IteratorInt it, int v){
  
  	assert(it != NULL);
	// Create new node with value being the given value
	Node *new = newNode(v);
	assert(new!=NULL);
	// If empty list
	if(it->head == NULL){
		it->head = new;				// new node become only element
		it->previousNode = new;		// move the cursor behind the new element
		it-> nitems++;              //showLL(it->head);
		return 1;
	}
	// If inserting at beginning 
	else if(hasPrevious(it) == 0 && hasNext(it) == 1){
		it->head = new;
		// moving the cursor behind the inserted node and link the next node with new node
		it->nextNode->prev = new;	
		new->next = it->nextNode;	
		it->previousNode = new;	
		it-> nitems++;               //showLL(it->head);
		return 1;
		
	}
	// if end of the list
	else if(hasNext(it) == 0 && hasPrevious(it) == 1){
		// link the new node to the previous node which is currently the last element.
		it->previousNode->next = new;
		new->prev = it->previousNode;
		it->previousNode = new;		// moving cursor (Only need to move previousNode as its end of the list and nextNode will still point to NULL)
		it-> nitems++;              //showLL(it->head);
		return 1;
	}
	// if somewhere in the middle of the list
	else {	
		// link the new node to where cursor currently is (which is previousNode->next)
		it->previousNode->next = new;
		new->prev = it->previousNode;
		// link the existing nodes after cursor to the new node and redefine cursor position
		it->nextNode->prev = new;	
		new->next = it->nextNode;
		it->previousNode = new;
		it-> nitems++;             	//showLL(it->head);
		return 1;
	}
	return 0;
}

// Check if there are any elements in the forward direction
int hasNext(IteratorInt it){
	assert(it!=NULL);
	if(it->nextNode != NULL){
		return 1;
	}
	else{
		return 0;
	}
}

// Check if there are any elements in the previous direction.
int hasPrevious(IteratorInt it){
  	assert(it!=NULL);
	if(it->previousNode != NULL){
		return 1;
	}
	else{
		return 0;
	}
}

// Move the cursor to the next position and return the pointer to the element it went passed by
int *next(IteratorInt it){
	assert(it!=NULL);
	// If there is next value
  	if(hasNext(it) == 1){
		// Move to next value by moving the cursor position
		it->previousNode = it->nextNode;
		it->nextNode = it->nextNode->next;
		
		// Update last called value
		it->last = it->previousNode;
		
		int *p = &(it->last->value);
		return p;
	} 
	else{	
		it->last = NULL;
  		return NULL;
	}
}

// Move the cursor in backward direction and return the pointer to the element it went passed by.
int *previous(IteratorInt it){
	assert(it!=NULL);
  	if(hasPrevious(it) == 1){
		// Move the cursor position forward
		it->nextNode = it->previousNode;
		it->previousNode = it->previousNode->prev;
		
		// Update last called value
		it->last = it->nextNode;
		
		int *p = &(it->last->value);
		return p;
	} 
	else{	
		it->last = NULL;
  		return NULL;
	}
}

// Delete the last called element that was returned by next or previous or findNext or findPrevious. 
int deleteElm(IteratorInt it){
	//If there is no last called, return 0. Hence, precondition not met
	if(it->last == NULL){
		return 0;
	}
									//showLL(it->head);
	// If the last called element is not the head, we need to traverse through the list and find the last called
	if(it->last != it->head){
		Node *current = it->head; 	// set current to head and start moving
		while(current != NULL && current != it->last){
			current = current->next;
		}
		// If somwhere in the middle of the list
		if(current->next != NULL){
			current->prev->next = current->next;
			current->next->prev = current->prev;
		} else{
			// If at end of the list
			current->prev->next = NULL;
		}
	}
	// Otherwise, it is at head we we need to assign new head, remove link as well
	else{	
		// If deleting only element, reset everything
		if(it->head->next == NULL){
			it->head = NULL;
			it->last = NULL;
			it->previousNode = NULL;
			it->nextNode = NULL;
			free(it->last);
			it-> nitems--;
			return 1;
		}
		// Make the next element the head and remove its link
		it->head = it->head->next;
		it->head->prev = NULL;
	}
	// Adjust the cursor accordingly. If the element we are deleting is currently defining the cursor, we need to change the cursor.
	if(it->last == it->previousNode){
		it->previousNode = it->previousNode->prev;
	}else if(it->last == it->nextNode){
		it->nextNode = it->nextNode->next;
	}
	it->last = NULL;
	free(it->last);
	it-> nitems--;                   //showLL(it->head);
	return 1;
}

// Replace the last element returned by next or previous or findNext or findPrevious with the specfied element v
int set(IteratorInt it, int v){
	// if precondition not met
	if(it->last == NULL){
		return 0;
	}
	// Move through the list until we find last called element
	Node *current = it->head;
	while(current != NULL && current != it->last){
			current = current->next;
	}
	// Set the value to v
	current->value = v;
	// Set last to Null as set/delete must be immediately followed by either next, previous, findNext or findPrevious
	it->last = NULL;
	                                 //showLL(it->head);
	return 1;
	
}

// Returns pointer to the next value in it that matches the given value v and advances the cursor position past the value returned
int *findNext(IteratorInt it, int v){
	// Traverse through the list from current cursor position until we reach a node with the value v
	Node *current = it->nextNode;
	while(current!=NULL && current->value != v){
		current = current->next;
	}
	// If we moved through the list without finding an element that matched
	if(current==NULL){
		it->last = NULL;
		return NULL;
	}
	
	// Initialize pointer variable to point to the next value in the list that matches the given value v to be returned
	int *p = &(current->value);
	
	// When value is found, we want to move our cursor to behind it.
	it->previousNode = current;
	it->nextNode = current->next;
	// Set last called value
	it->last = current;
  
  return p;
}

// Works similarly as findNext but in reverse direction
int *findPrevious(IteratorInt it, int v){
	Node *current = it->previousNode;
	while(current!=NULL && current->value != v){
		current = current->prev;
	}
	if(current==NULL){
		it->last = NULL;
		return NULL;
	}

	int *p = &(current->value);
	it->nextNode = current;
	it->previousNode = current->prev;
	it->last = current;
  
  return p;
}

// Deletes all nodes in it and free associated memory
void freeIt(IteratorInt it){

	assert(it!=NULL);		// check current iterator
	Node *curr, *prev;		// Initialize pointers
	curr = it->head;		// make pointer point to head variable
	while(curr!=NULL){		// move through linked list
		prev = curr;		// assign current to previous
		curr = curr->next;	// move current to next
		free(prev);			// free previous node
	}
	free(curr);				// free current node
	free(it);				// free iterator

}





