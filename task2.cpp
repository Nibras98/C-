#include<iostream>

using namespace std;

int main()
{
    int i,j,n,loc,temp,min,a[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        min=a[i];
        loc=i;
        cout<<"\nstep "<<i<<" :";
        for(int k=0; k<n; k++)
        {
            cout<<a[k]<<" ";

        }
        for(j=i+1; j<n; j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }

        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }



    return 0;
}
