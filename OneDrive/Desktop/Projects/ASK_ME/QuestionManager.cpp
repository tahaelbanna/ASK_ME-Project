#include "QuestionManager.h"
#include<bits/stdc++.h>
using namespace std;
string s = "";int l =0;
QuestionManager::QuestionManager(){
    loadQuestions();
}
void QuestionManager::loadQuestions(){
    Quests.clear();
    ifstream in("question.txt");
    string ln;
    while(getline(in,ln)){
        Question qq = Question::fromstring(ln);
        Quests.push_back(qq);
        initid = max(initid,Quests.back().Get_questionid());
    }
}
void QuestionManager::saveQuestions(){
    ofstream out("question.txt");
    for(const auto&Ques:Quests){
        out << Ques.tostring() << endl;
    }
}

void QuestionManager::AnswerQuestion(USER&user){
    int Questid;
    cout << "Enter The ID of Question: "<<endl;
    cin >> Questid;
    bool found = false;
    for(auto&i:Quests){
        if(i.Get_questionid() == Questid){
            string answer;
            cout << "Enter Your Answer: " << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, answer);
            i.add_answer(answer);
            saveQuestions();
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Question not found!" << endl;
    }
}

void QuestionManager::AskQuestion(USER& user){
    cout << "Asking question by user: " << user.Get_username() << endl;
    string ask;
    cout << "Enter Your Question: "<<endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,ask);
    ++initid;
    Question q(initid, user.Get_id(), ask,user.Get_username(),user.Get_anon()); 
    Quests.push_back(q);
    saveQuestions();
}

void QuestionManager::ViewQuestion(USER& user){
    cout << "\nQuestions:\n";
    for(auto& q:Quests){
        int ID = q.Get_userid();
        bool isAnon = q.is_anonymous();
        string usernameToShow = (isAnon && ID != user.Get_id()) ? "Anon" : q.Get_username();
        cout << "\nUser ID: " << (isAnon && ID != user.Get_id() ? 000 : ID)
            << " | UserName: " << usernameToShow << endl;
        cout << " Question ID: " << q.Get_questionid() << " | " << q.Get_massege() << endl;
        vector<string> answers = q.getAnswers();
        for (auto& ans : answers) {
            cout << " Answer: " << ans << endl;
        }
    }
}

void QuestionManager::DeleteQuestion(USER&user){
    int qId;
    cout << "Enter question ID to delete: "<<endl;
    cin >> qId;
    bool found = false;
    for(auto it =Quests.begin();it!=Quests.end();++it){
        if(it->Get_questionid()==qId&&it->Get_userid()==user.Get_id()){
            Quests.erase(it);
            saveQuestions();
            cout << "Question deleted.\n";
            found = true;
            break;
        }
    }
    if(!found){
        cout << "Question not found or you can't delete it.\n";
    }
}
