#ifndef КУРСОВА_TESTREADER_H
#define КУРСОВА_TESTREADER_H
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
class TestReader {
public:
    QuestionDescriber questions[10];
TestReader();
void readQuestion();
};


#endif