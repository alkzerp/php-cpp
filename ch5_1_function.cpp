#include <iostream>
using namespace std;

void CompValue(int a, int b)
{
	if (a<b)
			cout<<"The lager value:"<<b<<endl;
	else if (a>b)
			cout<<"The lager value:"<<a<<endl;
	else
			cout<<"The values is equal."<<endl;
}

int main()
{
	int i,j;
	cout<<"Pls input 2 value:"<<endl;
	cin>>i>>j;
	CompValue(i,j);
	return 0;
}
