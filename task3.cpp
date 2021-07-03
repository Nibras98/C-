#include<iostream>

using namespace std;

int main()
{
    int i,j,n,temp,a[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<n;i++)
    {
         cout<<"\nstep "<<i-1<<" :";
	    for(int k=0;k<n;k++)
        {
            cout<<a[k]<<" ";

        }
        temp=a[i];
        j=i-1;


        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];    //moves element forward
            j=j-1;
        }

        a[j+1]=temp;
        //insert element in proper place
    }


    return 0;
}
