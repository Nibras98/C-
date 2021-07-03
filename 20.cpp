#include <iostream>
using namespace std;
int main(){

	int row, col, foundRow=0, foundCol=0;
	cout<<"enter row size:";
	cin>>row;
	cout<<"\nenter column size:";
	cin>>col;
	int a[row][col];

	bool flag =0;
	cout<<"\nenter elements:";

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cin>>a[i][j];
		}
	}
	int x;
	cout<<"\nenter element for search:";
	cin>>x;

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(a[i][j]==x){
				foundRow = i;
				foundCol = j;
				flag =1;
				break;
			}
		}
		if(flag ==1)
			break;
	}
	if(flag==1){
		cout<<"Row:"<<foundRow+1<<" Column:"<<foundCol+1;
	}
	else {
		cout<<"Value not found in the Matrix !!";
	}
	return 0;
}
