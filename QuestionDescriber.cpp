#include "QuestionDescriber.h"
QuestionDescriber::QuestionDescriber(){
    question = qwerty;
    answer = {"","",""};
    trueanswer=-1;
}
QuestionDescriber::QuestionDescriber(string question, string answers[3], int useranswer){
    question = question;
    answer = answers[useranswer];
}
bool QuestionDescriber::correctAnswer( int useranswer){
if(useransver == trueanswers){
return true;
}
return false;
}
