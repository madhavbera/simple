#include<iostream>
using namespace std;
#define max 5
int stack[max];
int Top=0;
int isfull(){
    if(Top==max-1)
    {
        return 1;
    }
}
void push(int value)
{
    if(isfull())
    {
        cout<<"Stack is overflow";
    }
    else{
        stack[Top]=value;
        Top++;
    }
}
void pop()
{
    cout<<"\nDelete value: "<<stack[Top];
    int dvalue=stack[Top];

    Top--;
}
void peek()
{
    cout<<"TOP most element in stack:"<<stack[Top];
}
void Display()
{
    for (int i = 0; i <Top; i++)
    {
    cout<<stack[i]<<endl;
    }
    
    // cout<<stack;
}

int main()
{
    int a[max];
  for(int i =0;i<max;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<max;i++)
  {
      push(a[i]);
  }
 
   Display();

    return 0;
}