//
// Created by ayuba on 22/12/2021.
#include <iostream>
#include "string"

using namespace std;

/*
 Create class of stack
 */
class Stack{
private:
    int top;
    int arr[10];

// Create a constructor of stack
public:
    Stack()
    {
        top = -1;
        for(int i=0; i<10;i++)
        {
            arr[i] = 0;
        }
    }

// Function to check if stack is empty
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }

// Function to check if stack is full
    bool isFull()
    {
        if(top==9)
            return true;
        else
            return false;
    }

// Function to push value into the stack
    void push(int val)
    {
        if(isFull())
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
           top++;
           arr[top]=val;
        }
    }

// Function to posh value from the stack
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

// Function to count values in the stack
    int count()
    {
        return top + 1;
    }

// Function to peek value of stack
    int peek(int pos)
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return 0;
        } else
            return arr[pos];
    }

// Function to change value of stack
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout<<"Changed value is "<<pos<<endl;
    }

// Function to display values of stack
    int display()
    {
        cout<<"Stack values are "<<endl;
        for(int i = 9; i >=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    }


};

 int main()
 {
     Stack s1;
     int option, position, value;

     do {
         cout<<"Select the number of operation you want to perform. Enter 0 to exit."<<endl;
         cout<<"1. Push"<<endl;
         cout<<"2. Pop"<<endl;
         cout<<"3. isEmpty()"<<endl;
         cout<<"4. isFull"<<endl;
         cout<<"5. Peek()"<<endl;
         cout<<"6. Count()"<<endl;
         cout<<"7. Change()"<<endl;
         cout<<"8. Display()"<<endl;
         cout<<"9. Clear Your Screen"<<endl;

         cin>>option;

         switch (option)
         {
             case 0:
                 break;
             case 1:
                 cout<<"Enter the value you want to push in the stack"<<endl;
                 cin>>value;
                 s1.push(value);
                 break;

             case 2:
                 cout<<"Pop function called. Pop Value is "<<s1.pop()<<endl;
                 break;

             case 3:
                 if(s1.isEmpty())
                 {
                     cout<<"Stack is empty"<<endl;
                 }
                 else
                 {
                     cout<<"Stack is not empty"<<endl;
                 };
                 break;

             case 4:
                 if(s1.isFull())
                 {
                     cout<<"Stack is full"<<endl;
                 }
                 else
                 {
                     cout<<"Stack is not full"<<endl;
                 };
                 break;

             case 5:
                 cout<<"Enter the position of item you want to peek: "<<endl;
                 cin>>position;
                 cout<<"Peek function called - the value at position is "<<s1.peek(position)<<endl;
                 break;

             case 6:
                 cout<<"Count function called - numbers in stack are "<<s1.count()<<endl;
                 break;


             case 7:
                 cout<<"Changed function called. Enter the position of item you want to change "<<endl;
                 cin>>position;
                 cout<<"Enter the value of item you want to change "<<endl;
                 cin>>value;
                 s1.change(position, value);
                 break;

             case 8:
                 cout<<"Display function called. All values are "<<endl;
                 s1.display();
                 break;

             case 9:
                 system("cls");
                 break;
             default:
                 cout<<"Number entered is out of range!"<<endl;

         }
     } while (option !=0);


     return 0;
 }