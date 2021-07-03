#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter the size of an array: ";
    cin >> n;
    char a[n];
    cout << "Please enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"\nStep 0: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl ;
    int i,j,loc,temp,min,accept_swap,x=1;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {

            if(min>a[j])
            {
                min=a[j];
                accept_swap = j;
                loc=accept_swap;
            }
        }

        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
        cout << "Step " << x++ << ": " ;
        for (int k=0; k<n; k++)
            cout << a[k] << "  " ;
        cout << endl ;
    }

    return 0;
}
