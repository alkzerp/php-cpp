#include <iostream>
using namespace std;

int main()
{
		//要特别注意，如何使用枚举变量
		enum computer {basic,assembly,cobol,java,php,c,python};
		//computer lang;
		int n;
		cout<<"Select one of language:"<<endl
				<<basic<<" basic language"<<endl
				<<assembly<<" assembly language"<<endl
				<<cobol<<" cobol language"<<endl
				<<java<<" java language"<<endl
				<<php<<" php language"<<endl
				<<c<<" c language"<<endl
				<<python<<" python language"<<endl;
		cin>>n;
		switch(n)
		{
				case basic:
						cout<<"you selection is basic"<<endl;
						break;
				case assembly:
						cout<<"you selection is assembly"<<endl;
						break;
				case cobol:
						cout<<"you selection is cobol"<<endl;
						break;
				case java:
						cout<<"you selection is java"<<endl;
						break;
				case php:
						cout<<"you selection is php"<<endl;
						break;
				case c:
						cout<<"you selection is c"<<endl;
						break;
				case python:
						cout<<"you selection is python"<<endl;
						break;
			}
		return 0;
}
