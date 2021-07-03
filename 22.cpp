#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter input for nth term:";
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		int ps =0;
		for(int j=1;j<=i;j++){
			sum+=j;
			ps+=j;
			if(j==i){
				cout<<j;
			}
			else {
				cout<<j<<"+";
			}
		}
		cout<<"="<<ps<<"\n";
	}
	cout<<"sum of this series: "<<sum;
	return 0;
}
