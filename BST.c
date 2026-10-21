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
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node* build(struct node* root, int val)
{
	if(root==NULL)
	{
		return create(val);
	}
	if(root->data>val)
	{
		root->left=build(root->left,val);
	}
	else if(root->data<val)
	{
		root->right=build(root->right,val);
	}
	return root;
}
void inorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%d ", root->data);
	inorder(root->right);
}

int main()
{
	struct node* root=NULL;
	int n,i;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		root=build(root,a[i]);
	}
	printf("Inorder is: ");
	inorder(root);
	return 0;
}
