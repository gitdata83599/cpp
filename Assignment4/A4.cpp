#include<iostream>
using namespace std;

class Stack
{
    private :

    int size;
    int top;
    int *ptr;

    public : 

    Stack(int size=5)
    {
    
        this->size=size;
        ptr = new int[size];
        top = -1;
    }

    void push(int num)
    {
        if(!isFull())
        {
            top++;
            ptr[top]=num;
            cout<<"Value is push in Stack"<<endl;
        }
        else
        {
            cout<<"Stack is Full"<<endl;
        }  
    }

    void pop()
    {
        if(!isEmpty())
        {
            top--;
            cout<<"Value is pop from Stack"<<endl;
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
        }
    }

    void peek()
    {
        if(!isEmpty())
        {
            cout<<"Top Value - "<<ptr[top]<<endl;;
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
        }
    }

    bool isEmpty()
    {
        return top==-1;
    }

    bool isFull()
    {
       return top==size-1;
    }

    void printf()
    {
        cout<<"Values in Stack --> "<<endl;

        for(int i=0;i<=top;i++)
        {
            cout<<ptr[i]<<" "<<endl;;
        }
    }

    ~Stack()
    {
        delete[] ptr;
        ptr=NULL;
    }
};

int main()
{
    Stack s1(5);
    int choice;

    do
    {
        cout<<"0. Exit"<<endl;
        cout<<"1. Push Element"<<endl;
        cout<<"2. Pop Element"<<endl;
        cout<<"3. Peak Element"<<endl;
        cout<<"4. Print Value"<<endl;
        cout<<"Enter you choice : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0 :
                cout<<"!!! Exit Successfully !!!"<<endl; 
                break;
            case 1 :
                int n;
                cout<<"Enter value to push : "<<endl;
                cin>>n;
                s1.push(n);
                break;
            case 2 : 
                s1.pop();
                break;
            case 3 : 
                s1.peek();
                break;
            case 4 :
                s1.printf();
                break;
        }

    }while(choice!=0);

    return 0;
}