#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
}*head;
void insertionatbegining();
void insertionatend();
void insertionatanyposition();
void deletionatbegining();
void deletionatend();
void deletionatanyposition();
void display();
void main()
{
	int ch;
	
	do
	{
	printf("1)insertion at begining\n2)insertion at end\n3)insertion at any position\n4)deletion at begining\n");
	printf("5)deletion at end\n6)deletion at any position\n7)Display\n");
	printf("8)Exit\nEnter Your Choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				insertionatbegining();
				break;
			}
			case 2:
			{
				insertionatend();
				break;
			}
			case 3:
			{
				insertionatanyposition();
				break;
			}
			case 4:
			{
				deletionatbegining();
				break;
			}
			case 5:
			{
				deletionatend();
				break;
			}
			case 6:
			{
				deletionatanyposition();
			}
			case 7:
			{
				display();
				break;
			}
			default:
			printf("Wrong Choice");
		}
	
	}
	while(ch!=8);
}
void insertionatbegining()
{
	int item;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data to be inserted");
	scanf("%d",&item);
	if(temp==NULL)
	{
		printf("No memory space available");
	}
	else
	{
		temp->data=item;
		temp->link=head;
		head=temp;
	}
}
void insertionatend()
{
	int item;
	struct node *temp,*ptr;
	if(head==NULL)
	{
		insertionatbegining();
	}
	else
	{
		printf("Enter the data to be inserted");
		scanf("%d",&item);
		temp=(struct node*)malloc(sizeof(struct node));	
		ptr=head;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;
		temp->data=item;
		temp->link=NULL;
	}
}
void insertionatanyposition()
{
	int item,key;
	struct node *temp,*ptr;
	if(head==NULL)
	{
		
		insertionatbegining();
	}
	else	
	{
		printf("Enter the data to be inserted");
		scanf("%d",&item);
		temp=(struct node*)malloc(sizeof(struct node));	
		printf("Enter the number after which value to be added");
		scanf("%d",&key);
		ptr=head;
		while(ptr->data!=key&&ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		if(ptr->data!=key&&ptr->link==NULL)
		printf("search fails\n");
		else
		{
			temp->data=item;
			temp->link=ptr->link;
			ptr->link=temp;
		}
	}
}
void deletionatbegining()
{
	struct node *ptr;
	if(head==NULL)
	printf("Empty\n");
	else
	{
		ptr=head;
		head=ptr->link;
		printf("the data %d is deleted\n",ptr->data);
		free(ptr);
	}
} 
void deletionatend()
{
	struct node *temp,*ptr;
	if(head==NULL)
	{
		printf("Empty\n");
	}
	else if(head->link==NULL)
	{
		ptr=head;
		head=NULL;
		printf("the data %d is deleted\n",ptr->data);
		free(ptr);
	}
	else
 	{
		ptr=head;
		temp=head->link;
		while(temp->link!=NULL)
		{
			ptr=temp;
			temp=temp->link;
		}
		ptr->link=NULL;
		printf("the data %d is deleted\n",temp->data);
		free(temp);
	}
}	
void deletionatanyposition()
{
	struct node *ptr,*temp;
	int key;
	printf("enter the data to be deleted\n");
	scanf("%d",&key);
	if(head==NULL)
	{
		printf("Empty\n");
	}
	else if(head->link==NULL)
	{
		deletionatbegining();
		head==NULL;
	}
	else if(head->data==key)
	{
		deletionatbegining();
	}
	else
	{
		temp=head;
		ptr=temp->link;
		while(ptr->data!=key&&ptr->link!=NULL)
		{
			temp=ptr;
			ptr=ptr->link;
		}
		if(ptr->data!=key&&ptr->link==NULL)
		{
			printf("search failed\n");
		}
		else
		{
			temp->link=ptr->link;
			printf("the data %d is deleted\n",ptr->data);
			free(ptr);
		}
	}
}
void display()
{
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("Empty\n");
	}
	else
	{
		printf("Linked list:");
		while(ptr!=NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->link;
		}
		printf("\n");
	}
}
							
			
							
					
				
