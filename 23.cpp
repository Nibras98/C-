#include <iostream>
#include <limits.h>
using namespace std;
class Stack{
public:
	int size=100;
	int top;
	int a[100]={0};
	Stack(int s){
		size = s;
		top=-1;
	}
	void push(int x){
		if(top<size){
			top++;
			a[top] = x;
		}
		else cout<<"stack overflow";
	}
	int pop(){
		if(top>=0){
			int item = a[top];
			top--;
			return item;
		}
		else {
			cout<<"stack underflow";
			return -1;
		}
	}
	bool empty(){
		if(top<0)
			return true;
		else return false;
	}
};
int main(){
	int size;
	cout<<"enter you stack length:";
    cin>>size;
	Stack st(size);
	cout<<"\nenter elements:";
	for (int i = 0; i < size; ++i)
	{
		int x; cin>>x;
		st.push(x);
	}
	int mi=INT_MAX, ma = 0;
	while(!st.empty()){
		int curr = st.pop();
		if(curr<mi){
			mi = curr;
		}
		if(curr>ma){
			ma= curr;
		}
	}
	cout<<"min: "<<mi<<"\nmax: "<<ma;
	return 0;
}
