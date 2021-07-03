
#include <iostream>
using namespace std;

struct TInformation
{
	string d;
	string cNumber;
	string tNumber;
};

class HDQueue
{
	TInformation queue[99];
	int maxSize = 99;
	int front = -1;
	int rear = -1;
	public:
		void enQueue(TInformation tInformation)
		{
			if (front == -1 && rear == -1)
			{
				front = 0;
				rear = 0;
				queue[rear] = tInformation;
			}
			else
			{
				rear++;
				queue[rear] = tInformation;
			}
		}

	void deQueue()
	{
		if (front == rear && front != -1)
		{
			front = -1;
			rear = -1;
		}
		else
			front++;
	}

	void cCNumber(string cNumber)
	{
		for (int i = 0; i <= rear; i++)
		{
			if (queue[i].cNumber == cNumber)
			{
				cout << "\nToll-Box Information" << endl;
				cout << "Enter the Date[dd/mm/yyyy]: " << queue[i].d << endl;
				cout << "Enter the Car Number[xx-xxxx]: " << queue[i].cNumber << endl;
				cout << "Ticket Number: " << queue[i].tNumber << endl;
			}
		}
	}
};

class MDQueue
{
	TInformation queue[99];
	int maxSize = 99;
	int front = -1;
	int rear = -1;
	public:
		void enQueue(TInformation tInformation)
		{
			if (front == -1 && rear == -1)
			{
				front = 0;
				rear = 0;
				queue[rear] = tInformation;
			}
			else
			{
				rear++;
				queue[rear] = tInformation;
			}
		}

	void deQueue()
	{
		if (front == rear && front != -1)
		{
			front = -1;
			rear = -1;
		}
		else
			front++;
	}

	void cCNumber(string cNumber)
	{
		for (int i = 0; i <= rear; i++)
		{
			if (queue[i].cNumber == cNumber)
			{
				cout << "\nToll-Box Information" << endl;
				cout << "Enter the Date[dd/mm/yyyy]: " << queue[i].d << endl;
				cout << "Enter the Car Number[xx-xxxx]: " << queue[i].cNumber << endl;
				cout << "Ticket Number: " << queue[i].tNumber << endl;
			}
		}
	}
};

class LDQueue
{
	TInformation queue[99];
	int maxSize = 99;
	int front = -1;
	int rear = -1;
	public:
		void enQueue(TInformation tInformation)
		{
			if (front == -1 && rear == -1)
			{
				front = 0;
				rear = 0;
				queue[rear] = tInformation;
			}
			else
			{
				rear++;
				queue[rear] = tInformation;
			}
		}

	void deQueue()
	{
		if (front == rear && front != -1)
		{
			front = -1;
			rear = -1;
		}
		else
			front++;
	}

	void cCNumber(string cNumber)
	{
		for (int i = 0; i <= rear; i++)
		{
			if (queue[i].cNumber == cNumber)
			{
				cout << "\nToll-Box Information" << endl;
				cout << "Enter the Date[dd/mm/yyyy]: " << queue[i].d << endl;
				cout << "Enter the Car Number[xx-xxxx]: " << queue[i].cNumber << endl;
				cout << "Ticket Number: " << queue[i].tNumber << endl;
			}
		}
	}
};

int main()
{
	HDQueue hDQueue;
	MDQueue mDQueue;
	LDQueue lDQueue;
	int hDQMoney = 0;
	int mDQMoney = 0;
	int lDQMoney = 0;
	cout << "Input how many toll information you want to enter: ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nInput the vehicle type:" << endl;
		cout << "1. Heavy vehicle Queue" << endl;
		cout << "2. Medium vehicle Queue" << endl;
		cout << "3. Light vehicle Queue" << endl;
		cout << "-> ";
		int c = 0;
		cin >> c;
		cout << "\n Toll-Box information:" << endl;
		cout << "Enter the Date[dd/mm/yyyy]:";
		string d;
		cin >> d;
		cout << "Enter the Car Number[xx-xxxx] ";
		string cNumber;
		cin >> cNumber;
		cout << "Ticket Number: ";
		string tNumber;
		cin >> tNumber;
		switch (c)
		{
			case 1:
				{
					TInformation tInformation;
					tInformation.d = d;
					tInformation.cNumber = cNumber;
					tInformation.tNumber = tNumber;
					hDQueue.enQueue(tInformation);
					hDQMoney += 800;
					break;
				}

			case 2:
				{
					TInformation tInformation;
					tInformation.d = d;
					tInformation.cNumber = cNumber;
					tInformation.tNumber = tNumber;
					mDQueue.enQueue(tInformation);
					mDQMoney += 500;
					break;
				}

			case 3:
				{
					TInformation tInformation;
					tInformation.d = d;
					tInformation.cNumber = cNumber;
					tInformation.tNumber = tNumber;
					lDQueue.enQueue(tInformation);
					lDQMoney += 300;
					break;
				}
		}
	}
	cout << "\nInput the car number of the vehicle you want to show: ";
	string rCNumber;
	cin >> rCNumber;
	hDQueue.cCNumber(rCNumber);
	mDQueue.cCNumber(rCNumber);
	lDQueue.cCNumber(rCNumber);
	cout << "\nEarned money from heavy vehicle queue: " << hDQMoney << endl;
	cout << "Earned money from medium vehicle queue: " << mDQMoney << endl;
	cout << "Earned money from light vehicle queue: " << lDQMoney << endl;
	cout << "Earned total money from all vehicle queue: " << hDQMoney + mDQMoney + lDQMoney << endl;
	return 0;
}
