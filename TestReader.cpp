#include "TestReader.h"
using namespace std;
TestReader::TestReader(){}
void TestReader::readQuestion(){
    ifstream inf("test.txt");
    if (!inf)
    {
        cerr << "Uh oh, SomeText.txt could not be opened for reading!" << endl;
        exit(1);
    }
    while (inf)
    {
string question;
string answer1, answer2, answer3;
int corectanswer;
        getline(inf, question);
        getline(inf, answer1);
        getline(inf, answer2);
        getline(inf, answer3);
inf >> corectanswer;
cout << question << endl;
cout << answer1 << endl;
cout << answer2 << endl;
cout << answer3 << endl;
cout << corectanswer << endl;
cout << endl;
    }
}
