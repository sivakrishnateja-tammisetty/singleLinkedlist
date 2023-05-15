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
			p=p->nxt;
		}
		p->nxt=temp;
	}
	printf("Element inserted at the end was successfully completed\n");
}

//INSERT AT SPECIFIED POSITION
void insertAtSpecifiedPosition(struct node **head)
{
	int position,value;
	printf("Enter position and value:\n");
	scanf("%d%d",&position,&value);
	int count=1;
	struct node *p=*head;
	while(p!=NULL)
	{
		if(count==position)
		{
			break;
		}
		p=p->nxt;
		count++;
	}
	if(p==NULL)
	{
		printf("Invalid position\n");
	}
	else
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node*));
		temp->data=value;
		temp->nxt=p->nxt;
		p->nxt=temp;
	}
}

//DELETION OF DATA
void deletionOfData(struct node **head)
{
	int target;
	printf("Enter target value:");
	scanf("%d",&target);
	struct node *p=*head;
	struct node *q=NULL;
	while(p!=NULL)
	{
		if(p->data==target)
		{
			break;
		}
		q=p;
		p=p->nxt;
	}
	if(p==NULL)
	{
		printf("Target value is already not present in linked list\n");
	}
	else if(q==NULL)
	{
		*head=p->nxt;
	}
	else
	{
		q->nxt=p->nxt;
		p->nxt=NULL;
		free(p);
	}
}
*/

//SEARCHING OPERATION 
void search(struct node **head)
{
	int target_data;
	printf("Enter which value you want to search in Linkedlist:");
	scanf("%d",&target_data);
	int flag=-1;
	struct node *p=*head;
	while(p!=NULL)
	{
		if(p->data==target_data)
		{
			flag=1;
			break;
		}
		p=p->nxt;
	}
	if(flag==-1)
	{
		printf("Element was found\n");
	}
	else
	{
		printf("Element was not found\n");
	}
}
int main()
{
	struct node *head=NULL;
	while(1)
	{
		int choice;
		printf("1) Insert at end 2) Insert at specified position 3) Display 4)Deletion of data 5) Searching 6)exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			insertAtEnd(&head);
		}
		else if(choice==2)
		{
			insertAtSpecifiedPosition(&head);
		}
		else if(choice==3)
		{
			display(&head);
		}
		else if(choice==4)
		{
			deletionOfData(&head);
		}
		else if(choice==5)
		{
			search(&head);
		}
		else
		{
			break;
		}
	}
	return 0;
}
