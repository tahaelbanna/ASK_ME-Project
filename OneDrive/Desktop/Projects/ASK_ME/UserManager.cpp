#include "UserManager.h"
#include<bits/stdc++.h>
using namespace std;
UserManager::UserManager(){
    loaduser();
}
void UserManager::loaduser(){
    users.clear();
    ifstream in("user.txt");
    string line;
    while(getline(in,line)){
        USER u = USER::fromstring(line);
        users.push_back(u);
        initid = max(initid,u.Get_id());
    }
}
void UserManager::saveuser(){
    ofstream out("user.txt");
    for(const auto&user:users){
        out << user.tostring() << endl;
    }
}
USER*UserManager::findusername(string &username){
    for(auto&user:users){
        if(user.Get_username()==username){
            return &user;
        }
    }
    return nullptr;
}
USER*UserManager::login(){
    string username,pass;
    cout << "Enter Username: " << endl;
    cin >> username;
    cout << "Enter Password: " << endl;
    cin >> pass;
    USER*use = findusername(username);
    if(use&&use->Get_password()==pass){
        return use;
    }
    else{
        cout << "Invalid login"<<endl;
        return nullptr;
    }
}
USER*UserManager::signup(){
    string name,pass,email,username;
    bool anon;
    cout << "Enter Name: " << endl;
    cin >> name;
    cout << "Enter Email: " << endl;
    cin >> email;
    cout << "Enter Username: " << endl;
    cin >> username;
    cout << "Enter Password: " << endl;
    cin >> pass;
    cout << "Allow Anonymos?(1-0) " << endl;
    cin >> anon;
    if(findusername(username)){
        cout << "User name is already exist"<<endl;
        return nullptr;
    }
    USER newuser(++initid,name,email,username,pass,anon);
    users.push_back(newuser);
    saveuser();
    return &users.back();
}