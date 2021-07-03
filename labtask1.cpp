#include<iostream>
using namespace std;
int main(){
  int count=0;
  int vowel=0;
  int consonent= 0;
  string s;
  cout<<"Enter user String\n";
  getline(cin, s);

  for(int i = 0; s[i]!=0; i++)
  {
    count++;
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
      vowel++;
    }
    else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
      consonent++;
    }
  }
  cout<<"\n";
  cout<<"Length of the string: "<<count<<endl;
  cout<<"Vowels used : "<<vowel<<endl;
  cout<<"Consonent in this array are: "<<consonent<<endl;
  return 0;
}
