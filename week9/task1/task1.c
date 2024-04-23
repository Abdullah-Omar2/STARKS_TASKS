#include <stdio.h>
#include <stdlib.h>
#include "\Users\Abdullah O. Elazhary\STARKS\notepad++\std_types.h"
struct node
{
    int data;
    struct node*link;
};
void insertAtEnd(struct node**head,int data);
void findMiddle(struct node*head);
void DeletLinkedList(struct node**head);
void main() 
{
    struct node*head=NULL;
    int length,data;
    for(;;)
	{
        printf("Enter the length of the linked list:\t");
        scanf("%d",&length);
        if(length<=0)
		{
            printf("Invalid length enter a positive integer\n");
            continue;
        }
        for (int i=0;i<length;i++)
		{
			printf("enter %dth node value:\t",i+1);
            scanf("%d",&data);
            insertAtEnd(&head,data);
        }
        findMiddle(head);
		DeletLinkedList(&head);
    }
}
void insertAtEnd(struct node**head,int data)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    struct node*ptr=*head;
    temp->data=data;
    temp->link=NULL;
	if(*head==NULL)
	{
        *head=temp;
        return;
    }
	while(ptr->link!=NULL)ptr=ptr->link;
    ptr->link=temp;
}
void findMiddle(struct node*head)
{
    if(head==NULL)
	{
        printf("List is empty\n");
        return;
    }
    struct node*ptr1=head,*ptr2=head;
    while(ptr2!=NULL&&ptr2->link!=NULL)
	{
        ptr2=ptr2->link->link;
        ptr1=ptr1->link;
    }
    if (ptr2==NULL)printf("Middle elements are: %d and %d\n", ptr1->data, ptr1->link->data); 
	else printf("Middle element is: %d\n", ptr1->data);
}
void DeletLinkedList (struct node**head)
{
	struct node*temp;
	while(*head!=NULL)
	{
        temp=*head;
        *head=(*head)->link;
        free(temp);
    }
}
