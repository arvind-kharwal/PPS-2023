#include<stdio.h>
#include<stdlib.h>
void add_at_end(struct node *,int);
void printdata(struct node *);
void numnod(struct node *);
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head -> data = 10;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 20;
    current->link = NULL;
    head->link = current;
    
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 30;
    current->link = NULL;
    head->link->link = current;
    add_at_end(head,40);
    printdata(head);
    numnod(head);
    printf("\nAdding one more node:\n");
    add_at_end(head,50);
    printdata(head);
    numnod(head);
}
void add_at_end(struct node *head,int x)
{
    if(head==NULL)
        printf("\nList is empty");
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->link = NULL;
    while(ptr->link!=NULL)
    {
        ptr= ptr->link;
    }
    ptr->link = temp;
}
void printdata(struct node *head)
{
    if(head==NULL)
        printf("\nList is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr= ptr->link;
    }
    }
void numnod(struct node *head)
{
    int count =0;
    if(head==NULL)
        printf("\nList is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        count++;
        ptr= ptr->link;
    }
    printf("\nThe count is %d",count);
    }
