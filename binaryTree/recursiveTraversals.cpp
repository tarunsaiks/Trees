#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int x)
	{
		this->data = x;
		left = right = NULL;
	}
};
void PreOrder(struct Node* root)
{
	if(root)
	{
		cout<<root->data<<endl;
		PreOrder(root->left);
		PreOrder(root->right);
	}
	return;
}
void InOrder(struct Node* root)
{
	if(root)
	{
		InOrder(root->left);
		cout<<root->data<<endl;
		InOrder(root->right);
	}
	return;
}
void PostOrder(struct Node* root)
{
	if(root)
	{
		PostOrder(root->left);
		PostOrder(root->right);
		cout<<root->data;
	}
	return;
}

int main()
{
	struct Node* root = new Node(10);
	//root->data = 10;
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
	return 0;
}
