#include <iostream>
using namespace std;

//注意，这是使用函数前要声明函数的存在，否则就会产生编译时找不到函数的错误
int sum(int,int);

int main()
{
	int a,b;
	int result;
	cout<<"Pls input 2 integer values:"<<endl;
	cin>>a>>b;
	result=sum(a,b);
	cout<<"The result:"<<result<<endl;
	return 0;
}

int sum(int x,int y)
{
	return x+y;
}
