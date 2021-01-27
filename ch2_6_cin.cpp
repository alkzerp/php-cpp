// 这是一个比较典型的计算及精度测试
#include <iostream>
using namespace std;
int main()
{
		// define and initializer
		float rad;
		float PI=3.1415926;
		cout<<"======================"<<endl;
		cout<<"Please input the rad's values:";
		cin>>rad;
		cout<<"Ball volume:"<<4/3*PI*rad*rad*rad<<endl;
		cout<<"====================="<<endl;

	return 0;
}
