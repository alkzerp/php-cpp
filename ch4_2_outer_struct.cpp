#include <iostream>
#include <iomanip>
using namespace std;

struct score
{
	int math;
	int english;
	int computer;
};

int main()
{
	score zhun;
	zhun.math=80;
	zhun.english=90;
	zhun.computer=100;

	cout<<"name  math  english  computer"<<endl;
	cout<<"zhun  "<<zhun.math<<setw(10)<<zhun.english<<setw(10)<<zhun.computer<<endl;
	return 0;
}
