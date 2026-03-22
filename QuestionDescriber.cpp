#include "QuestionDescriber.h"
using namespace std;
QuestionDescriber::QuestionDescriber(){
    question = "";
    trueanswer=-1;
}
QuestionDescriber::QuestionDescriber(string question, string answers[3], int useranswer){
    question = question;
    answers = answers;
}
bool QuestionDescriber::correctAnswer( int useranswer){
if(useranswer == trueanswer){
return true;
}
return false;
}
