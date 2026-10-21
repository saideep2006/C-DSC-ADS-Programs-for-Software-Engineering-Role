#include<stdio.h>
#include<stdlib.h>
// Program to insert a node at the beginning of a singly linked list
struct Node
{
    int data;
    struct Node* next;
};
struct Node* root =NULL;
void create(int x)
{
    struct Node* nnode=(struct Node*)malloc(sizeof(struct Node));
    nnode->data=x;
    nnode->next=NULL;
    root=nnode;
}
void inserbeg(int x)
{
    if(root == NULL)
    {
        create(x);
    }
    else
    {
        struct Node* temp=root;
        temp->next=root;
        struct Node* root = temp;
    }
}
void display(int x)
{
    struct Node* temp=root;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,i,x;
    printf("Enter the number of elements in the list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&x);
        inserbeg(x);
    }
    display(x);
    return 0;
}
