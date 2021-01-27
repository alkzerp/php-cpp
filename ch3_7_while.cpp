#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cout<<"Please input a number:";
	cin>>n;
	int i=n;

	while(i<=n+10)
	{
		cout<<setw(4)<<i;
		cout<<setw(12)<<long(i)*i;
		cout<<setw(12)<<long(i)*i*i;
		cout<<endl;
		i++;
	}
	return 0;
}
