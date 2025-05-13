#ifndef QUESTION_H
#define QUESTION_H
#include<bits/stdc++.h>
using namespace std;
class Question{
    private:
        int question_id;
        int user_id;
        string user_uesrname;
        string massege;
        vector<string>answers;
        bool anonymous;
    public:
        Question();
        Question(int question_id,int user_id,const string&massege,const string&user_uesrname,bool anonymous = false);
        vector<string>&getAnswers();
        int Get_questionid()const;
        int Get_userid()const;
        bool is_anonymous() const;
        string Get_username()const;
        string Get_massege()const;
        void add_answer(string&ans);
        string tostring()const;
        static Question fromstring(string&line);
};
#endif