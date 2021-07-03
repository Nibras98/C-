#include <iostream>
#include <algorithm>
using namespace std;

class PriorityQueue{
public:
	int end=0, start=0;
	int a[1000]={0};
	void sort(){
		for (int i = start; i < end-1; i++){
    		for (int j = start; j < end-i-1; j++){
        		if (a[j] < a[j+1]){
            		swap(a[j], a[j+1]);
        		}
    		}
        }
	}
	void enqueue(int n){
		a[end]=n;
		end++;
		sort();
	}
	int dequeue(){
		int item = a[start];
		start++;
		return item;
	}
	void print(){
		for(int i=start;i<end;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
};
int main(){
	PriorityQueue pq;
	int size;
	cout<<"enter size of the prority queue:";
	cin>>size;
	cout<<"\nenter elements:";
	for (int i = 0; i < size; ++i)
	{
		int x; cin>>x;
		pq.enqueue(x);
		pq.print();
	}
	return 0;
}
