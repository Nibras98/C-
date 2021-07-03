#include<iostream>
using namespace std;
int main()
{
    int a1=5;
    int a2=7;
    int a3=10;
    int array1[a1];
    int array2[a2];
    int array3[a3];
    cout<<"enter numbers for array1: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>array1[i];
        array3[i]=array1[i];
    }
    int k=5;
    cout<<"enter numbers for array2: "<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>array2[i];
        array3[k]=array2[i];
        k++;
    }
    cout<<endl;
    cout<<"reverse order: "<<endl;
    for(int j=11;j>=0;j--)
    {
        cout<<array3[j]<<" ";    }
}
