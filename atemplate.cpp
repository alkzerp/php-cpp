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

int main()
{
	cout<<endl;
	return 0;
}

//注意：
//1、编译源程序：g++ -Wall atemplate.cpp 则使用a.out作为可执行文件
//   编译源程序：g++ -Wall atemplate.cpp -o atemplate 则使用atemplate作为可执行文件
//2、要查看.o文件，则： g++ -C atemplate.cpp 产生.o 文件，可以直接查看.o文件
//也可以使用指令：nm -C atemplate.o 可以查看编译过程产生的信息，就是检查语法是否正确。
//3、要使用debug调试程序，可以使用-g 选项，如：g++ -g atemplate.cpp -o atemplate
//4、要连接两个.o文件生成可执行文件，可以使用：g++ a.o b.o的方式即可。
//5、要指明使用的编译版本，可以这样：
//g++ -Wall -std=c++11 atemplate.cpp -o atemplate
