//输入一个数，计算这个数的阶乘
#include <iostream>
using namespace std;
int main()
{
	int n;
	unsigned long factor=1;
	cout<<"Enter a integer:";
	cin>>n;

	for (int i=n;i>=1;i--)
			factor *=i;

	cout<<n<<"!="<<factor<<endl;
	return 0;
}
