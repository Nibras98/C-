#include <iostream>
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
class Student{
public:
	int id;
	string name;
	double CGPA;
	PriorityQueue marks;
	void setName(string n){
		name = n;
	}
	string getName(){
		return name;
	}
	void setId(int n){
		id = n;
	}
	int getId(){
		return id;
	}
	void setCgpa(double n){
		CGPA = n;
	}
	double getCgpa(){
		return CGPA;
	}
	void setMarks(int n){
		marks.enqueue(n);
	}
	double averageMarks(){
		int index =1;
		double total = 0;
		while(index<=3){
			total +=marks.dequeue();
			index++;
		}
		double avg = total/3;
		return avg;
	}
	void show(){
		cout<<"Name: "<<getName()<<"\n";
		cout<<"Id: "<<getId()<<"\n";
		cout<<"CGPA:"<<getCgpa()<<"\n";
		cout<<"average marks of best three: "<<averageMarks()<<"\n";
	}
};
int main(){
	Student s1,s2;
	string name;
	cout<<"enter name:";
	cin>>name;
	int id;
	cout<<"\nenter id:";
	cin>>id;
	double cgpa;
	cout<<"\nenter cgpa:";
	cin>>cgpa;
	int totalquiz;
    cout<<"\ntotal quiz:";
    cin>>totalquiz;
	s1.setName(name);
	s1.setId(id);
	s1.setCgpa(cgpa);
	cout<<"\nenter marks for quiz:";
	for (int i = 0; i < totalquiz; ++i)
	{
		int x; cin>>x;
		s1.setMarks(x);
	}
	s1.show();

	string name2;
	cout<<"enter name:";
	cin>>name2;
	int id2;
	cout<<"\nenter id:";
	cin>>id2;
	double cgpa2;
	cout<<"\nenter cgpa:";
	cin>>cgpa2;
	int totalquiz2;
    cout<<"\ntotal quiz:";
    cin>>totalquiz2;

	s2.setName(name2);
	s2.setId(id2);
	s2.setCgpa(cgpa2);

	cout<<"\nenter marks for quiz:";
	for (int i = 0; i < totalquiz; ++i)
	{
		int x; cin>>x;
		s2.setMarks(x);
	}
	s2.show();
	return 0;
}
