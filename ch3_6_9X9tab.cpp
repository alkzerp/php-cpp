#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		//注意：此处第8行的i++，因为11行要用到i值，所以i的值必须要计算出来的
		for(j=1;j<=i;j++)
		{
			cout<<setw(3)<<i<<"*"<<j<<"="<<setw(2)<<i*j;
			//注意：setw(3)是这个函数之后的输出都占用这3个宽度，如果要该变宽度，那么就要重新使用setw()函数来设置了。
		}
		cout<<endl;
	}

	return 0;
}

