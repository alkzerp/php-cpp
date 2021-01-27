#include <iostream>
using namespace std;
int main()
{
	char ch=65;
	for (ch=65;ch<91;ch+=1)
	{
		//注意：此处因为ch是char类型，所以输出的是字符哦
		//如果要使用整数来表达字符，则需要是char(65)这一类的函数
		cout<<ch<<" ";
	}
	cout<<endl;
	return 0;
}
