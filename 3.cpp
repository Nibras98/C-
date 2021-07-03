#include <iostream>
using namespace std;
struct Student
{
    int id;
    double cgpa;
    int credit;
};
int main()
{
    struct Student s[100];
    cout<<"total number of student: \n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter unique id of student"<<i+1<<":"<<endl;
        cin>>s[i].id;
        cout<<"enter cgpa of student"<<i+1<<":"<<endl;;
        cin>>s[i].cgpa;
        cout<<"enter completed credit of student"<<i+1<<":"<<endl;;
        cin>>s[i].credit;
    }

    cout<<"enter cgpa for search:\n";
    double k;
    int kk;
    cin>>k;
    cout<<"**************after searching for cgpa your result is :*******************\n";
    for(int i=0;i<n;i++)
    {
        if(s[i].cgpa>=k)
        {
            kk=i;
        cout<<"id:"<<s[kk].id<<endl;
        cout<<"cgpa:"<<s[kk].cgpa<<endl;
        cout<<"completed credit:"<<s[kk].credit<<endl;
        cout<<"_____________________________\n";
        }
    }
    cout<<"enter completed credit for search:\n";
    int y,yy;
    cin>>y;
    cout<<"**************after searching for completed credit your result is:*******************\n";
    for(int i=0;i<n;i++)
    {
        if(s[i].credit>=y)
        {
            yy=i;
        cout<<"id:"<<s[yy].id<<endl;
        cout<<"cgpa:"<<s[yy].cgpa<<endl;
        cout<<"completed credit:"<<s[yy].credit<<endl;
        cout<<"________________________________\n";
        }
    }

}
