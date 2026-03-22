#include "TestReader.h"
Testreader::Testreader(){}
void Testreader::readQuestion(){
    ifstream inf("test.txt");
    if (!inf)
    {
        cerr << "Uh oh, SomeText.txt could not be opened for reading!" << endl;
        exit(1);
    }
    while (inf)
    {
strin question
string answer1, answer2, answer3;
int corectanswer;
inf >> question;
inf >> answer1 >> answer2 >> answer3;
inf >> corectanswer;
cout << question << endl;
cout << answer1 << endl;
cout << answer2 << endl;
cout << answer3 << endl;
cout << corectanswer << endl;
cout << endl;
        git commit -m " "
    }
}
