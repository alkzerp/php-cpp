#include <iostream>
using namespace std;
int main()
{
	int n;
	unsigned long lowfib=0,hifib=1;
	cout<<"Enter a number:";
	cin>>n;

	for(int i=2;i<=n;i++)
	{
		long x=lowfib;
		lowfib=hifib;
		hifib=x+lowfib;
		cout<<"Fibonacci:"<<hifib<<endl;
	}
	//cout<<endl;
	//cout<<"Fibonacci:"<<hifib<<endl;
	return 0;
}

