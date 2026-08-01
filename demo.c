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
   int count;
   int sum=0;
    while (temp!=NULL)
    {
       printf("%d ->",temp->data);
       count++;
       sum=sum+temp->data;
       temp=temp->next;
    }
    int mean=sum/count;
    printf("NULL\n");
    printf("Number of node which is connected to each other:%d\n",count);
    printf("Mean:%d\n",mean);
    


    printf("hellow world");
    return 0;
}