#include<stdio.h>
#include<stdlib.h>
struct demo
{
    int data;
    struct demo *next;
};

int main()
{
    struct demo *head,*first,*second;
    printf("Allocating memory for each node\n");
    head=(struct demo*)malloc(sizeof(struct demo));
    first=(struct demo*)malloc(sizeof(struct demo));
    second=(struct demo*)malloc(sizeof(struct demo));
    head->data=10;
    first->data=20;
    second->data=30;
    printf("linked each node to each other\n");
    head->next=first;
    first->next=second;
    second->next=NULL;
   struct demo *temp=head;
    while (temp!=NULL)
    {
       printf("%d ->",temp->data);
       temp=temp->next;
    }
    printf("NULL\n");
    


    printf("hellow world");
    return 0;
}