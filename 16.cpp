#include <iostream>
using namespace std;
struct Node
{
  int item;
  struct Node* next;
};
struct Node* head = NULL;
void reverse(int data)
{
  struct Node* new_node = new Node();
  new_node->item = data;
  new_node->next = head;
  head = new_node;
}
void printList(struct Node* node)
{
  while (node != NULL)
  {
    cout << node->item << " ";
    node = node->next;
  }
  cout << endl << endl;
}
int main()
{
  int n;
  cout<<"how many number you want to enter\n";
  cin>>n;
  int x;
  cout<<"Insert Data: "<<endl;
  for(int i = 0; i<n; i++)
  {
    cin>>x;
    reverse(x);
  }
  cout << "Linked list in reverse order: ";
  printList(head);
  return 0;
}
