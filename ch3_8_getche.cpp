#include <iostream>
#include <conio>
// 此处引用不对，是conio.h还是 conio引用不知道如何处理？
using namespace std;

int main()
{
	int count=0;
	cout<<endl<<"Type in a phrase:\n";
	while(getche()!='\r')count++;
	cout<<"\nCharacter count are:"<<count;
 	return 0;
}
