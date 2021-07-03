#include <iostream>
using namespace std;
int main()
{
    int r1, r2, x;
    cout<<"First Number:";
    cin>>r1;
    cout<<"\nSecond number:";
    cin>>r2;
    cout<<"\nDivisible by:";
    cin>>x;
    int sum =0;
    cout<<"\nNumbers:: ";
    for(int i=r1; i<=r2; i++)
    {
        if(i%x==0)
        {
            cout<<i<<", ";
            sum+=i;
        }
    }

    cout<<"\nsum: "<<sum<<"\n";
    return 0;
}
