#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *nxt;
};
void display(struct node **head)
{
	struct node *p=*head;
	while(p!=NULL)
	{
		printf("%d\t",p->data);
	p=p->nxt;
	}
}
int main()
{
	struct node *head=NULL;
	struct node*first=(struct node*)malloc(sizeof(struct node*));
	struct node*second=(struct node*)malloc(sizeof(struct node*));
	struct node*third=(struct node*)malloc(sizeof(struct node*));
	head=first;
	first->data=10;
	first->nxt=second;
	second->data=20;
	second->nxt=third;
	third->data=30;
	third->nxt=NULL;
	display(&head);
	return 0;
}
