#include <iostream>

using namespace std;

int main()
{
    int arr[50],n,s=0;
    cout<<"how many elements?"<<endl;
    cin>>n;
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
         {
            if(arr[i]==arr[j])
            {
                while(j<n)
                {
                    arr[j]=arr[j+1];
                    j++;
                    s++;

                }
                --n;
            }
            else{
                continue;
            }

        }
    }
    if(s>0)

   {for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
