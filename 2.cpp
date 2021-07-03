#include <iostream>
using namespace std;
void encode(string s,int k){
    string ss;


    for(int i=0;i<s.length();i++)
    {


        int val=int(s[i]);
        int dup=k;
        if(val + k > 122){
            k=k-(122-val);
            k=k%26;
            ss=ss+char(96+k);
        }
        else
           {
               ss=ss+char(val + k);
           }
        k=dup;
    }

    cout<<ss;
}

int main()
{
    string ss;
    cout<<"enter your name without space: ";
    cin>>ss;
    cout<<"enter your value of k: ";
    int k;
    cin>>k;
    encode(ss,k);
}
