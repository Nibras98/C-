#include <iostream>
using namespace std;


class Stack
{
private:
  int Stack[10], Top=0, MaxSize=10;
public:

bool isEmpty()
{
	return (Top == 0);
}




bool isFull()
{
	return (Top == MaxSize);
}



bool push(int Element)
{

	if( isFull() )
    {
        cout << "Stack is Full\n";
        return false;
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
