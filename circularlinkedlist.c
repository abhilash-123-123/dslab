#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

void main(){
	int choice=0;
	while(choice!=7){
		printf("\n************Main Menu************\n");
		printf("\nChoose one option from the following list:\n");
		printf("\n===========================================\n");
		printf("\n1.Insert in beggining\n2.Insert at last\n3.delete from beggining\n4.delete from last\n5.search for an element\n6.display\n7.exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:beginsert();
			break;
			case 2:lastinsert();
			break;
			case 3:begin_delete();
			break;
			case 4:last_delete();
			break;
			case 5:search();
			break;
			case 6:display();
			break;
			case 7:exit(0);
			break;
			default:printf("Please enter a valid choice:");
		}
	}
     flag=1;
                                        }
                                        i++;
                                        ptr=ptr->next;
                                }
                        }
                        if(flag!=0)
                        {
                                printf("\nItem not found\n");
                        }
                }
        }


void display()
{
        struct node *ptr;
        ptr=head;
        if(head==NULL)
        {
                printf("\nNothing to print\n");
        }
        else
        {
                printf("\nPrinting values....\n");
                while(ptr->next!=head)
                {
                        printf("\n%d\n",ptr->data);
                        ptr=ptr->next;
                }
                printf("%d\n",ptr->data);
        }
}

}
void beginsert(){
	struct node *ptr,*temp;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr=NULL){
		printf("\nOVERFLOW");
	}else{
		printf("\nEnter the node data:");
		scanf("%d",&item);
		ptr->data=item;
		if(head==NULL){
			head=ptr;
			ptr->next=head;
		}else{
			temp=head;
			while(temp->next !=head)
			{
				temp=temp->next;
			}
			ptr->next=head;
			temp->next=ptr;
			head=ptr;
		}
		printf("\nnode inserted\n");
	}
}

void lastinsert(){
	struct node *ptr, *temp;
        int item;
        ptr=(struct node *)malloc(sizeof(struct node));
        if(ptr=NULL){
                printf("\nOVERFLOW");
        }else{
                printf("\nEnter data:");
                scanf("%d",&item);
		ptr->data= item;
                if(head==NULL){
                        head=ptr;
                        ptr->next=head;
                }else{
                        temp=head;
                        while(temp->next !=head)
                        {
                                temp=temp->next;
                        }
			temp->next=ptr;
                        ptr->next=head;
		}
		printf("\nnode inserted\n");
	}
}

void begin_delete(){
	struct node *ptr;
	if(head==NULL)
	{
		printf("\nUNDERFLOW\n");
	}else if(head->next==head){
		free(head);
		head=NULL;
		printf("\nnode deleted\n");
		}else{
			ptr=head;
			while(ptr->next!=head)
			{
				ptr=ptr->next;
				free(head);
				head=ptr->next;
				printf("\nnode deleted\n");
			}
	}
}

void last_delete(){
	struct node *ptr,*preptr;
	if(head==NULL){
		printf("\nUNDERfLOW\n");
	}else if(head->next==head){
		free(head);
		head=NULL;
		printf("\nnode deleted\n");
	}else{
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
			ptr->next=head->next;
			free(head);
			head=ptr->next;
			printf("\nnode deleted\n");
		}
	}
}

void search(){
		struct node *ptr;
		int item,i=0,flag=1;
		ptr=head;
		if(ptr==NULL)
		{
			printf("\nEmpty list\n");
		}
		else
		{
			printf("\nEnter item which you want to search?\n ");
			scanf("%d",&item);
			if(head->data==item)
			{
				printf("Item found at loction %d",i+1);
				flag=0;
			}
			else
			{
				while(ptr->next!=head)
     flag=1;
                                        }
                                        i++;
                                        ptr=ptr->next;
                                }
                        }
                        if(flag!=0)
                        {
                                printf("\nItem not found\n");
                        }
                }
        }


void display()
{
        struct node *ptr;
        ptr=head;
        if(head==NULL)
        {
                printf("\nNothing to print\n");
        }
        else
        {
                printf("\nPrinting values....\n");
                while(ptr->next!=head)
                {
                        printf("\n%d\n",ptr->data);
                        ptr=ptr->next;
                }
                printf("%d\n",ptr->data);
        }
}

				{
					if(ptr->data==item)
					{
						printf("\nItem found at loction %d",i+1);
						flag=0;
						break;
					}
					else
					{
						flag=1;
					}
					i++;
					ptr=ptr->next;
				}
			}
			if(flag!=0)
			{
				printf("\nItem not found\n");
			}
		}
	}


void display()
{
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("\nNothing to print\n");
	}
	else
	{
		printf("\nPrinting values....\n");
		do{
			printf("\n%d\n",ptr->data);
			ptr=ptr->next;
		}
		printf("%d\n",ptr->next);
	}
}
