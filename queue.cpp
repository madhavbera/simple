#include<iostream>
using namespace std;
#define max 5
int queue[max];
int front=-1,rear=-1;
int isempty()
{
    return (front==-1);

}
int isfull()
{
    return (rear==max-1);
}
void enqueue(int value)
{
    if(isfull())
    {
        cout<<"overflow cannot insert value:"<<value<<endl;
        return;
    }
    if(isempty())
    {
        front=0;
        // return;
    }
    
        rear++;
        queue[rear]=value;
        
    
}
void dequeue()
{
    if(isempty())
    {
        cout<<"underflow";
        return;
    }
    else{
        cout<<"delete value:"<<queue[front]<<endl;
        front++;
    }
    if(front>rear)
    {
        front=rear=-1;
    }
}
void peek()
{
    if(isempty())
    {
        return;
    }
    
    cout<<"topest value:"<<queue[rear]<<endl;
}
void display()
{
    if (isempty())
    {
        cout<<"queue is empty";
        return;
    }
    for(int i=rear;i>=front;i--)
    {
        cout<<queue[i]<<endl;

    }
    
}
int main()
{
    int a[]={2,3,4,5,6};
    for(int i=0;i<5;i++)
    {
        enqueue(a[i]);
    }
    for(int i=0;i<2;i++)
    {
    dequeue();
    }
    peek();
    display();
    return 0;
}