#include <iostream>
using namespace std;

int main(int argc,char** argv)
{
	int a,b;
	a=0;
	b=0;
	
	cout<<"input a b:";
	cin>>a>>b; //在输入a b的值的时候，输入的数值之间有空格间隔

	if (a>b)
	{
		cout<<a<<">"<<b<<endl;
	}
	else
	{
		cout<<a<<"<"<<b<<endl;
	}
	return 0;
}
