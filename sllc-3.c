#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
int main()
{
    //create single node in single  linked list
    int x;
    printf("Enter the node elements:\n");
    scanf("%d",&x);
    struct Node *nnode=(struct Node*)malloc(sizeof(struct Node));
    nnode->data=x;
    nnode->next=NULL;
    struct Node *root=nnode;
    struct Node *temp=root;
    //create multiple nodes in single linked list
    int i,n;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        struct Node *nnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the node elements:");
        scanf("%d",&x);
        nnode->data=x;
        nnode->next=NULL;
        temp->next=nnode;
        temp=temp->next;
    }
    //display the linked list
    printf("The linked list is:\n");
    struct Node *temp1=root;
    while(temp1!=NULL)
    {
        printf("%d->",temp1->data);
        temp1=temp1->next;
    }
    printf(NULL);
    return 0;
}
