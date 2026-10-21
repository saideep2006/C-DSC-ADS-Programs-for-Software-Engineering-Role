#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* right;
	struct node* left;	
};
struct node* read(int val)
{
	struct node* x=(struct node*)malloc(sizeof(struct node));
	x->data=val;
	x->left=NULL;
	x->right=NULL;
	return x;
}
struct node* recurse(struct node* root, int val)
{
	if(root==NULL)
	{
		return read(val);
	}
	if(root->data>val)
	{
		root->left=recurse(root->left, val);
	}
	else
	{
		root->right=recurse(root->right, val);
	}
	return root;
}
struct node* r(struct node* root, int del)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data>del)
	{
		root->left=r(root->left, del);
	}
	else if(root->data<del)
	{
		root->right=r(root->right, del);
	}
	else
	{
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}
	}
	return root;
}
void inorder1(struct node* root)
{
	if(root==NULL)
	{
		return;
	}	
	inorder1(root->left);
	printf("%d ",root->data);
	inorder1(root->right);
}
void inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
int main()
{
	struct node* root=NULL;
	int n,i;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int del;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		root=recurse(root,a[i]);
	}
	inorder1(root);
	scanf("%d",&del);
	printf("Before deletion: ");
	root=r(root, del);
	printf("After deletion: ");
	inorder(root);
}
