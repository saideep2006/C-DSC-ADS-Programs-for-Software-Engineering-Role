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
void inorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}	
struct node* insertleft(struct node* root, int val)
{
	root->left=create(val);
	return root->left;
}
struct node* insertright(struct node* root, int val)
{
	root->right=create(val);
	return root->right;
}

int main()
{
	struct node* root = create(10);
	insertright(root,40);
	insertleft(root,80);
	printf("Inorder is: ");
	inorder(root);
	return 0;
}
