#include<iostream>
using namespace std;
int main(){
  int size;
  int n=0;
  int m=0;
  cout<<"Enter the Size of array A:\n";
  cin>>size;
  cout<<"Enter the elements of array A:\n";
  int arr1[size];
  for(int i = 0; i<size; i++){
    cin>>arr1[i];
  }
  int size2;
  cout<<"Enter the Size of array B:\n";
  cin>>size2;
  cout<<"Enter the elements of array B:\n";
  int arr2[size2];
  for(int i = 0; i<size2; i++){
    cin>>arr2[i];
  }
  int arrayComp1[size];

  for (int i = 0; i < size; i++)
  {
      int j;
      for(j = 0; j < i; j++)
      {
          if (arr1[i] == arr1[j])
          {
              break;
          }
      }
      if (i == j)
      {
          arrayComp1[n]=arr1[i];
          n++;
      }
  }
  int arrayComp2[size2];

  for (int i = 0; i < size2; i++)
  {
      int j;
      for(j = 0; j < i; j++)
      {
          if (arr2[i] == arr2[j])
          {
              break;
          }
      }
      if (i == j)
      {
          arrayComp2[m]=arr2[i];
          m++;
      }
  }
  int C[n];
  int p = 0;
  int flag=0;
  for(int i = 0; i<n; i++){
    for(int j = 0; j<m;j++){
      if(arrayComp1[i]==arrayComp2[j]){
        flag=1;
        C[p]=arrayComp2[j];
        p++;
      }
    }
  }
  if(flag!=1){
    cout<<"C array is Empty!\n";
  }else{
  cout<<"C = {";
  for(int i = 0; i<p; i++){
    cout<<C[i]<<" ";
  }
  cout<<"}";
  cout<<endl;
}
  return 0;
}


