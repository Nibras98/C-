#include<iostream>
using namespace std;
void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}
void selectionSort(int *array, int size)
{
    int ii=0;
    int jj=0;
    int i, j, imin;
    for(i = 0; i<size-1; i++)
    {
        jj=jj+1;

        imin = i;
        for(j = i+1; j<size; j++)
        {

            if(array[j] < array[imin])
            {
                imin = j;
            }
        }
        if(array[j] < array[imin])

        {
            imin = j;
        }

        swap(array[i], array[imin]);
        ii=ii+1;
    }
    cout<<"comparison: "<<jj<<"\nexchange:"<<ii;
}
int main()
{
    int n;
    cout << "Please enter the number\n";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"*****************************";
    cout << "\nArray before selection sort: ";
    display(arr, n);
    selectionSort(arr, n);
    cout<<"\n*****************************";
    cout << "\nArray after selection sort: ";
    display(arr, n);
}
