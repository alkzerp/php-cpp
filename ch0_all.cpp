#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

//面向过程的编程
int add1(int a,int b)
{
	return a+b;
}

//面向对象的方式变成，重载了（）作为加法操作
class ADD
{
	public:
		int operator() (int a,int b)
		{
			return a+b;
		}
};

//泛型编程方式
//问题：
//1、为何返回值是auto?
//2、为何T a,U b，两个参数的类型不一样？
//3、decltype(a+b)，这是声明了什么？
template <typename T,typename U>
auto add3(T a,U b)->decltype(a+b)
{
	return a+b;
};


//函数式编程方式
auto add4=[](int a,int b)->int{return a+b;};




//主程序

int main()
{
	ADD add2;
	cout<<add1(3,4)<<endl;
	cout<<add2(3,4)<<endl;
	cout<<add3(3,4)<<endl;
	cout<<add4(3,4)<<endl;
	return 0;
}
