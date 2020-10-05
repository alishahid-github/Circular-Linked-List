//A node class which creates the nodes for the linked List along basic getter and setter functions

#include<iostream>
using namespace std;
#ifndef NODE
#define NODE
class Node
{
public:
	Node();
	Node(int d);			// d=data
	void set_data(int d);
	void set_next(Node* n);		// n=next
	void set_prev(Node* p);		// p=prev
	int get_data();
	Node* get_next();
	Node* get_prev();
private:
	int data;
	Node* next;
	Node* prev;

};

#endif


