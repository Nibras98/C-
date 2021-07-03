#include <iostream>
#include <limits.h>
using namespace std;
int largest(int a[], int n){
	int large =0;
	for(int i=0;i<n;i++){
		if(a[i]>large){
			large = a[i];
		}
	}
	return large;
}
int smallest(int a[], int n){
	int small =a[0];
	for(int i=1;i<n;i++){
		if(a[i]<small){
			small = a[i];
		}
	}
	return small;
}
int main(){
    cout<<"enter size of array: ";
    int size;
    cin>>size;
	int a[size];
	cout<<"\nenter elements:";
	for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
	int large = largest(a, size);
	int small = smallest(a, size);
	cout<<"largest: "<<large<<"\n"<<"smallest: "<<small;
	return 0;
}
