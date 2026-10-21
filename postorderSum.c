#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* right;
	struct node* left;
};
struct node* create(int val)
{
	struct node* nnode = (struct node*)malloc(sizeof(struct node));
	nnode->data=val;
	nnode->left=NULL;
	nnode->right=NULL;
	return nnode;
}
struct node* build()
{
	int data;
	scanf("%d",&data);
	struct node* root=create(data);
	root->right=build();
	root->left=build();
	return root;
}
struct node* postorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
int main()
{
	struct node* root=NULL;
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		root=build(root,a[i]);
	}
	postorder(root);
	return 0;
}
