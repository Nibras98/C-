#include <iostream>
using namespace std;


class Stack
{

public:
      int *Stack, Top, MaxSize;
    MyStack(int Size=100)
    {
        MaxSize=Size;
        Stack=new int[MaxSize];
        Top=0;
    }
    ~MyStack()
    {
        delete [] Stack;
    }

bool isEmpty()
{
	return (Top == 0);
}




bool isFull()
{
	return (Top == MaxSize);
}



void push(int Element)
{

	if( isFull() )
    {
        resize();


    }

 	Stack[ Top++ ] = Element;
 	cout<< Element <<" is inserted into the Stack successfully.\n";
	return true;
}



bool pop()
{

	if( isEmpty() )
    {
        cout << "Stack empty\n";
        return false;
    }
	Top--;
	cout << "Pop operation is performed successfully.\n";
	return true;
}



int topElement()
{

	return Stack[ Top - 1 ];
}



void show()
{

	if(isEmpty())
    {
        cout << "Stack empty\n";
        return;
    }
    cout << "\n---------- STACK ELEMENTS ----------\n";
	for( int i=Top-1; i>=0; i-- )
	{
        cout << Stack[i] << endl;
	}
	cout<<endl<<endl;
}

void resize(int size)
{
    int *tempStk=new int [MaxSize+Size];
    for(int i=0; i<MaxSize;i++)
    {
        tempStk[i]=Stack[i];
    }
    MaxSize+=Size;
    delete[] Stack;
    Stack=tempStk;
}
};

int main()
{

	Stack s;

    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.show();
    cout<<"\nTop Element of the Stack: " << s.topElement() << endl;

    s.pop();
    s.pop();
    cout<<"\nTop Element of the Stack: " << s.topElement() << endl;
    s.show();

    s.pop();
    cout<<"\nTop Element of the Stack: " <<s.topElement() << endl;
    s.show();

    return 0;
}

