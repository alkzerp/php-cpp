#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int score[5] = {70,60,90,85,100};
    for (int i=0; i<5; i++)
    {
        cout << score[i] << "|";
    }
    cout << endl;
   
    char ch[5] = "abcd"; //省略花括号
    for (int i=0; i<5; i++)
    {
        cout << ch[i] << "|";
    }
    cout << endl;
    cout << ch <<endl;  //直接输出，这样输出，确实比较高效
   
    return 0;
}
