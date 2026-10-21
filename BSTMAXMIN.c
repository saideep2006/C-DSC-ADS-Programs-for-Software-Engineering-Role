#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* create(int val)
{
	struct node* nnode = (struct node*)malloc(sizeof(struct node));
	nnode->data=val;
	nnode->left=NULL;
	nnode->right=NULL;
	return nnode;
}

struct node* build(struct node* root, int val)
{
	if(root==NULL)
	{
		return create(val);
	}
	if(root->data>val)
	{
		root=build(root->left, val);
	}
	else if(root->data>val)
	{
		root=build(root->left, val);
	}
	return root;
}

