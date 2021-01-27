#include <iostream>
using namespace std;
struct grading
{
		int score;
		char grade;
};

struct scoring
{
		grading math;
		grading english;
		grading computer;
};

int main()
{
	scoring zhun;

	zhun.math.score=92;
	zhun.math.grade='A';

	zhun.english.score=86;
	zhun.english.grade='B';

	zhun.computer.score=92;
	zhun.computer.grade='A';

	cout<<"the score of math:"<<zhun.math.score<<"\tthescore of grade:"<<zhun.math.grade<<endl;
	cout<<"the score of enlish:"<<zhun.english.score<<"\tthescore of grade:"<<zhun.english.grade<<endl;
	cout<<"the score of computer:"<<zhun.computer.score<<"\tthescore of grade:"<<zhun.computer.grade<<endl;
	return 0;
}

