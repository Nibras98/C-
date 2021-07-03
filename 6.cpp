#include<iostream>
using namespace std;
int main()
{
    int a1=5;
    int a2=6;
    int a3=10;
    int array1[a1];
    int array2[a2];
    int array3[a3];
    cout<<"enter five numbers for array1: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>array1[i];
    }
    cout<<"enter six numbers for array2: "<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>array2[i];
    }
    int c=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(array1[i]==array2[j])
            {
                array3[c]=array1[i];
                c=c+1;
            }
        }
    }
    cout<<endl;
    if(c>0)
    {
    cout<<"array is: "<<endl;
    for(int i=0; i<c; i++)
    {
        cout<<array3[i]<<" ";
    }
    }
    else{
        cout<<"no common elements";
    }
}
