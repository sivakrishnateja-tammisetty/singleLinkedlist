#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *nxt;
};
/*
void display(struct node **head)
{
	struct node *p=*head;
	if(p==NULL)
	{
		printf("Linkedlist was empty\n");
	}
	while(p!=NULL)
	{
		printf("%d\t",p->data);
	p=p->nxt;
	}
}
*/

//INSERT NODE AT THE END OF THE LINKEDLIST

void insertAtEnd(struct node **head)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node *));
	int value;
	printf("Enter an value:");
	scanf("%d",&value);
	temp->data=value;
	temp->nxt=NULL;
	struct node *p=*head;//For traversing to a specified position
	if(p==NULL)//condition for,if linkedlist has no elements then assigning temp
	{
		*head=temp;
	}
	else
	{
		while(p->nxt !=NULL)
		{
			p->nxt;
		}
		p->nxt=temp;
	}
	printf("Element inserted at the end was successfully completed\n");
}
int main()
{
	struct node *head=NULL;
	while(1)
	{
		int choice;
		printf("1) Insert at end 2) Display 3)exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			insertAtEnd(&head);
		}
		else if(choice==2)
		{
			display(&head);
		}
		else
		{
			break;
		}
	}
	return 0;
}
