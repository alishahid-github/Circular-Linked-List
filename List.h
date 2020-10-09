//Header file for the Linked List with Basic funtions

#include<iostream>
#include"Node.h"
#ifndef LIST
#define LIST
using namespace std;
class List
{
private:
	Node* head = NULL;
	Node* tail = NULL;

public:
	List();
	int node_counter = 0;		//couter to check how many nodes are inserted
	bool insert(int d);		// d=data
	bool insert_at(int d, int pos);
	bool delete_list(int d);
	void print();
	int search(int d);
	//void sort();
	void set_head(Node* h);

};

#endif
