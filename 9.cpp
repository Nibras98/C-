#include<iostream>
using namespace std;
void display(int *array, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout << array[i] << " ";

    }

    cout << endl;
}
void insertionSort(int *array, int size)
{
    int ii=0;
    int jj=0;
    int key, j;
    for(int i = 1; i<size; i++)
    {
        jj=jj+1;
        key = array[i];
        j = i;
        while(j > 0 && array[j-1]>key)
        {
            array[j] = array[j-1];
            j--;
            ii=ii+1;
        }
        array[j] = key;
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
    cout << "\nArray before insertion sort: ";
    display(arr, n);
    insertionSort(arr, n);
    cout<<"\n*****************************";
    cout << "\nArray after insertion sort: ";
    display(arr, n);
}
