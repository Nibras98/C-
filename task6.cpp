#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *front = NULL;
Node *rear = NULL;

bool isempty()
{
    if(front == NULL && rear == NULL)
        return true;
    else
        return false;
}

void enqueue ( int value )
{
    Node *ptr = new Node();
    ptr->data= value;
    ptr->link = NULL;


    if( front == NULL )
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear ->link = ptr;
        rear = ptr;
    }
}

void dequeue ( )
{
    if( isempty() )
        cout<<"Queue is empty\n";
    else

        if( front == rear)
        {
            delete(front);
            front = rear = NULL;
        }
        else
        {
            Node *ptr = front;
            front = front->link;
            delete(ptr);
        }
}

void showfront( )
{
    if( isempty())
        cout<<"Queue is empty\n";
    else
        cout<<"\nelement at front is:"<<front->data;
}
void rear1( )
{
    if( isempty())
        cout<<"Queue is empty\n";
    else
        cout<<"\nelement at rear is:"<<rear->data; ;
}

void displayQueue()
{
    cout<<"\nqueue:\n";
    if (isempty())
        cout<<"Queue is empty\n";
    else
    {
        Node *ptr = front;
        while( ptr !=NULL)
        {
            cout<<"\n"<<ptr->data<<" ";
            ptr= ptr->link;
        }
    }
}
int main()
{
    enqueue(3);
    enqueue(9);
    enqueue(7);
    displayQueue();
    dequeue();
    showfront();
    enqueue(37);
    enqueue(5);
    displayQueue();
    dequeue();
    showfront();
    rear1();


}















