#ifndef КУРСОВА_QUESTIONDESCRIBER_H
#define КУРСОВА_QUESTIONDESCRIBER_H
#include <iostream>
using namespace std;
class QuestionDescriber
{
public:
string question;
string answers[3];
bool correctAnswer(int useranswer);
QuestionDescriber();
QuestionDescriber(string question, string answers[3], int useranswer);
private:
int trueanswer;
};
#endif