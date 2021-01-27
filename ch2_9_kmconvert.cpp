#include <iostream>
using namespace std;
int main()
{
	int mile,yard;
	float km;

	cout<<"\nConvert the mile and yard to Kilometer!\n"<<endl
			<<"Please enter miles:\n";
	cin>>mile;
	cout<<"Pls input yards:"<<endl;
	cin>>yard;

	km=1.609+(mile+float(yard)/1760);
	cout<<"The result is:"<<km<<endl;
	return 0;
}
