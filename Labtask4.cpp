#include<iostream>
using namespace std;
int main(){
  string m;
  int count=0;
  cout<<"Please Input the String: ";
  getline(cin, m);
  for(int i = 0; m[i]!=0; i++)
  {
    count++;
  }

  int a=count-1;
  string rev;
  int n = 0;
  for(int i = a; i>=0; i--){
    rev=rev+m[i];
  }


  cout<<"Reverse-order Output: "<<rev<<endl;
  if(m==rev){
    cout<<"Result Accepted\n";
  }else{
    cout<<"Result Rejected\n";
  }
  return 0;
}
