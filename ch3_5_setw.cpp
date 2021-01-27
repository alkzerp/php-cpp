#include <iostream>
#include <iomanip>	//使用setw域宽的方法时，必须引用的头函数

using namespace std;

int main()
{
	int n;
	cout<<"Pls input a number:";
	cin>>n;
	cout<<endl;
	for(int i=n;i<=n+10;i++)
	{
		cout<<setw(4)<<i;	//设置占位域宽为4，且右对齐
		cout<<setw(12)<<long(i)*i;
		cout<<setw(12)<<long(i)*i*i;
		cout<<endl;
	}
	return 0;
}
