#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
struct node* newNode(int key)
{
	struct  node * temp = new node;
	temp->data=key;
	temp->left=temp->right=NULL;
	return temp;
}
struct node *insert(struct node *root ,int data)
{
	
	if(root==NULL) 
	return newNode(data);
	if(root->data>data)
	root->left=insert(root->left,data);
	
	else if(root->data<data)
	root->right=insert(root->right,data);
	return root;
}
void inorder(node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<"||";
	inorder(root->right);
}
 main()
{
	struct node* root=NULL;
	root=insert(root,50);
	insert(root,45);
	insert(root,48);
	insert(root,78);
	
	inorder(root);
	 
}
