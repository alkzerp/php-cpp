#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	struct score
	{
		int math;
		int english;
		int computer;
	};

	score zhun;
	zhun.math=80;
	zhun.english=90;
	zhun.computer=100;

	cout<<"name  math  english  computer"<<endl;
	cout<<"zhun  "<<zhun.math<<setw(12)<<zhun.english<<setw(12)<<zhun.computer<<endl;
	return 0;
}
