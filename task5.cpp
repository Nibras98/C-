#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

struct Node* top;
void push(int data)

{
    struct Node* temp;
    temp = new Node();

    if (!temp)
    {
        cout << "\nHeap Overflow";

    }


    temp->data = data;
    temp->link = top;


    top = temp;
}


int isEmpty()
{
    return top == NULL;
}

int peek()
{

    if (!isEmpty())
        return top->data;
    else
        cout<<"no top";
}


void pop()
{
    struct Node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;

    }
    else
    {
        temp = top;

        top = top->link;
        temp->link = NULL;

        // free(temp);
    }
}

void display()
{
    struct Node* temp;


    if (top == NULL)
    {
        cout << "\nStack Underflow";
        // return 0;
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {

            cout << temp->data << "-> ";


            temp = temp->link;
        }
    }
}


int main()
{

    push(3);
    push(9);
    push(7);
    display();
    pop();
    pop();
    cout << "\nTop element is "
         << peek() << endl;
    push(37);
    push(5);
    display();
    pop();
    cout << "\nTop element is "
         << peek() << endl;




    return 0;
}


