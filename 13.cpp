#include <iostream>
using namespace std;


class Queue
{
private:
  int queue[100], front = -1, rear = -1, maxSize=100;
public:

bool isEmpty(){
    if ((front == -1) && (rear == -1))
    {
        return true;
    }

    else
    {
        return false;
    }
}

///returns True if the queue is full
bool isFull()
{
    if (rear == maxSize-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool enqueue(int Element)
{
  if(isFull() )
    {
        cout<< "Queue is Full\n";
        return false;
    }
  else if(isEmpty() )
    {
        front = rear = 0;
        queue[rear] = Element;
        cout<< Element <<" is inserted into the Queue successfully.\n";
        return true;
    }
    else
    {
        rear++;
        queue[rear] = Element;
        cout<< Element <<" is inserted into the Queue successfully.\n";
        return true;
    }
}


bool dequeue()
{
    if(isEmpty() )
    {
        cout << "Queue is empty! Dequeue not possible\n";
        return false;
    }

    else if (front == rear)
    {
        front = rear = -1;
        cout << "Dequeue operation is performed successfully.\n";
        return true;
    }

    else
    {
        front++;
        cout << "Dequeue operation is performed successfully.\n";
        return true;
    }
}

int frontElement()
{
  return queue[front];
}

int rearElement()
{
  return queue[rear];
}


void showQueue()
{
  if (isEmpty() )
  {
      cout << "Cannot show Queue because it is empty\n";
      return;
  }

  else
  {
     cout << "\nQUEUE ELEMENTS: ";
     for(int i = front; i <= rear; i++)
     {
        cout << queue[i] << " ";
     }
     cout << endl << endl;
  }
}

};

int main()
{
    Queue q;

	q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.showQueue();
    cout<<"\nFront Element of the Queue: " << q.frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << q.rearElement() <<endl;

    q.dequeue();
    q.dequeue();

    q.showQueue();
    cout<<"\nFront Element of the Queue: " << q.frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << q.rearElement() <<endl;

    return 0;
}
