#include "Question.h"
#include "QuestionManager.h"
#include<bits/stdc++.h>
using namespace std;


Question::Question(){}
Question::Question(int questionID,int userID,const string&mas,const string&username,bool isAnon){
    question_id = questionID;
    user_id = userID;
    massege = mas;
    user_uesrname = username; 
    anonymous = isAnon;
}
bool Question::is_anonymous()const{
    return anonymous;
}
vector<string>&Question::getAnswers(){
    return answers;
}
int Question::Get_questionid()const{
    return question_id;
}
int Question::Get_userid()const{
    return user_id;
}
string Question::Get_username()const{
    return user_uesrname;
}
string Question::Get_massege()const{
    return massege;
}
void Question::add_answer(string&ms){
    answers.push_back(ms);
}
string Question::tostring()const{
    string res = to_string(question_id) + "," + to_string(user_id) + "," + massege + "," + user_uesrname+ "," + (anonymous ? "1" : "0");
    for(auto &i:answers){
        res += ","+i;
    }
    return res;
}
Question Question::fromstring(string &line){
    stringstream s(line);
    string flag;
    int queid,usid;
    string Massege;
    string username;
    getline(s,flag,',');
    queid = stoi(flag);
    getline(s,flag,',');
    usid = stoi(flag);
    getline(s,Massege,',');
    getline(s,username,',');
    getline(s, flag, ',');
    bool isAnon = (flag == "1");
    vector<string> tempAnswers;
    while(getline(s,flag,',')){
        tempAnswers.push_back(flag);
    }
    Question q(queid,usid,Massege,username,isAnon);
    for(auto&ans:tempAnswers){
        q.add_answer(ans);
    }
    return q;
}