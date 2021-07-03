#include<iostream>
using namespace std;
int main(){
  int r1,c1,r2,c2;
  cout<<"Enter the row of the first matrix\n";
  cin>>r1;
  cout<<"Enter the column of the first matrix\n";
  cin>>c1;
  cout<<"Enter the row of the Second matrix\n";
  cin>>r2;
  cout<<"Enter the column of the Second matrix\n";
  cin>>c2;

  if(c1!=r2){
    cout<<"You cannot multiply this matrix because the number of column of the first matrix is not equal to the number of row of the second matrix\n";
    exit(0);
  }else{
    cout<<"Enter the Elements for the first matrix\n";
    int arr1[r1][c1];
    for(int i = 0; i<r1; i++){
      for(int j = 0; j<c1; j++){
        cin>>arr1[i][j];
      }
    }

    cout<<"Enter the Elements for the Second matrix\n";
    int arr2[r2][c2];
    for(int i = 0; i<r2; i++){
      for(int j = 0; j<c2; j++){
        cin>>arr2[i][j];
      }
    }

    int multiply[r1][c2];
    cout<<"multiply of the matrix=\n";
    for(int i=0;i<r1;i++){
      for(int j=0;j<c2;j++){
        multiply[i][j]=0;
        for(int k=0;k<c1;k++){
          multiply[i][j]=multiply[i][j]+arr1[i][k]*arr2[k][j];
        }
      }
    }

    for(int i = 0; i<r1; i++){
      for(int j = 0; j<c2; j++){
        cout<<multiply[i][j]<<" ";
      }
      cout<<endl;
    }




  }



  return 0;
}
