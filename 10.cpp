#include<iostream>
using namespace std;
int main()
{
    int array[10],n,s;
    cout<<"elements number?"<<endl;
    cin>>n;
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<endl;
    cout<<"enter the number you want to search: ";
    cin>>s;
    int i;
    int c=0;
    for (i=0;i<n;i++)
    {
        if(s==array[i])
        {
            c=c+1;

        }

    }
    cout<<endl;
    cout<<"your entered number occurs:"<<c<<" times";
}
