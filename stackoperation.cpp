#include<iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int Top = -1;

int isfull()
{
    return Top == MAX - 1;
}

int isempty()
{
    return Top == -1;
}

void push(int value)
{
    if(isfull())
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        Top++;
        stack[Top] = value;
    }
}

void pop()
{
    if(isempty())
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        cout << "Deleted value: " << stack[Top] << endl;
        Top--;
    }
}

void peek()
{
    if(isempty())
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        cout << "Top element: " << stack[Top] << endl;
    }
}

void display()
{
    if(isempty())
    {
        cout << "Stack is Empty\n";
        return;
    }

    cout << "Stack elements:\n";

    for(int i = Top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}

int main()
{
    int a[] = {10,20,30,40,50};
    


    for(int i=0;i<5;i++)
    {
        push(a[i]);
    }

    display();

    peek();

    pop();

    display();

    return 0;
}