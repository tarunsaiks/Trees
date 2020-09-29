#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node*left,*right;
	Node(int x)
	{
		this->data = x;
		left = right = NULL;
	}
};

void PreOrder(struct Node* root)
{
	//NodeValue - Left Subtree - Right Subtree
	stack<Node*>s;
	while(1)
	{
		while(root)
		{
			// Print Node value at first
			cout<<root->data<<" ";
			s.push(root); // pushed into stack to refer its right elements later
			root = root->left; // if left exists, gets into loop
		}
		if(s.empty()) break;// no futher Node's right exists.(END OF TREE)
		root = s.pop();
		// Even if right subtree exists, its Node is printed first
		// and then its left is traversed in first loop.
		root = root->right; 
	}
}

void InOrder(struct Node* root)
{
	stack<Node*> s;
	while(1)
	{
		while(root)
		{
			s.push(root->left);
			root = root->left;
		}
		if(s.empty()) break;
		root = s.pop();
		cout<<root->data<<" ";
		root = root->right;
	}
}

void PostOrder(struct Node* root)
{
	/*Incomplete Version*/
	stack<Node*> s;
	while(1)
	{
		//using previous variable to keep track of traversal
	}
}
int main()
{
	struct Node* root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->left = new Node(60);
	root->right->right = new Node(70);
	cout<<"PreOrder:\n";
	PreOrder(root);
	cout<<"Inorder: \n";
	InOrder(root);
	cout<<"PostOrder:\n";
	PostOrder(root);
}
