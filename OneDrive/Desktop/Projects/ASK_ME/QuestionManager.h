#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H
#include "Question.h"
#include "User.h"
#include<bits/stdc++.h>
using namespace std;

class QuestionManager{
    private:
        vector<Question>Quests;
        int initid=0;
        void loadQuestions();
        void saveQuestions();
    public:
        QuestionManager();
        void AskQuestion(USER& user);
        void AnswerQuestion(USER& user);
        void ViewQuestion(USER& user);
        void DeleteQuestion(USER& user);
};


#endif