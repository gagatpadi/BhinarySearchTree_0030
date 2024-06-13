#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;

	}
};
class BinaryTree
{
public:
	Node* ROOT;
	
	BinaryTree()
	{
		ROOT = nullptr; // Initializing Root to null
	}

	void insert(string element) // Insert a node in the binary search tree
	{
		Node* newNode = new Node(element, nullptr, nullptr); // Allocate memory for the new node
		newNode->info = element; // assign value to the data field of the new data
		newNode->leftchild = nullptr; // make the left child of the new node point tol Null
		newNode->rightchild = nullptr; // make the right child of the new data point to Null

		Node* parent = nullptr;
		Node* currentNode = nullptr;
		search(element, parent, currentNode); // locate the node which be the parent of the node to be insert
	}
};