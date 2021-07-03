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
void bubbleSort(int *array, int size)
{
     int jj=0;
        int ii=0;
    for(int i = 0; i<size; i++)
    {

        int swaps = 0;
        for(int j = 0; j<size-i-1; j++)
        {
            jj=jj+1;
            if(array[j] > array[j+1])
            {
                swapping(array[j], array[j+1]);
                swaps = 1;
                ii=ii+1;
            }
        }
        if(!swaps)
            break;
    }
    cout<<"comparison: "<<jj<<"\nexchange:"<<ii;
}
int main()
{
    int n;
    cout << "please enter the number \n";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"*****************************";
    cout << "\nArray before bubble sort: ";
    display(arr, n);
    bubbleSort(arr, n);
    cout<<"\n*****************************";
    cout << "\nArray after bubble sort: ";
    display(arr, n);
}
