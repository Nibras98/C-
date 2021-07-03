#include <bits/stdc++.h>
using namespace std;


class Node
{
public:
    int key;
    Node* next;
};


void push(Node** head_ref, int new_key)
{

    Node* new_node = new Node();


    new_node->key = new_key;


    new_node->next = (*head_ref);


    (*head_ref) = new_node;
}


bool search(Node* head, int x)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;
}

int main()
{

    Node* head = NULL;
    int x = 21;

    cout<<"enter 5 number:\n";
    int arr[4];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }


    push(&head,arr[0]);
    push(&head,arr[1]);
    push(&head, arr[2]);
    push(&head, arr[3]);
    push(&head, arr[4]);
    cout<<"enter number for search:\n";
    int n;
    cin>>n;



    search(head, n)? cout<<"present in the list" : cout<<"not present in the list";
    return 0;
}


