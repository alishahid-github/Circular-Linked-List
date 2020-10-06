//.cpp file of the Node class includes implementaion of funtions

#include<iostream>
#include"Node.h"
using namespace std;


Node::Node()
{
	data = 0;
	next = NULL;
	prev = NULL;
}

Node::Node(int d)
{
	data = d;
	next = NULL;
	prev = NULL;
}

void Node::set_data(int d) {
	data = d;
}
void Node::set_next(Node* n) {
	next = n;
}
void Node::set_prev(Node* p)
{
	prev = p;
}
Node* Node::get_next() {
	return next;
}
Node* Node::get_prev()
{
	return prev;
}
int Node::get_data() {
	return data;
}
