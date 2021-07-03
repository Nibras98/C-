#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    string name;
    double CGPA;
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setId(int n)
    {
        id = n;
    }
    int getId()
    {
        return id;
    }
    void setCgpa(double n)
    {
        CGPA = n;
    }
    double getCgpa()
    {
        return CGPA;
    }
    void show()
    {
        cout<<"Name: "<<getName()<<"\n";
        cout<<"Id: "<<getId()<<"\n";
        cout<<"CGPA:"<<getCgpa()<<"\n";
    }
};
int main()
{
    Student s;

    string name;
    int id;
    double cgpa;

    cout<<"enter name:";
    cin>>name;
    cout<<"\nenter id:";
    cin>>id;
    cout<<"\nenter cgpa:";
    cin>>cgpa;


    s.setName(name);
    s.setId(id);
    s.setCgpa(cgpa);
    s.show();
    s.getName();
    s.getId();
    s.getCgpa();
    return 0;
}
