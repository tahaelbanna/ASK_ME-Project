#include<bits/stdc++.h>
#include "User.h"
#include "UserManager.h"
using namespace std;

USER::USER(){}

USER::USER(int id,string name,string email,string username,string password,bool Anon){
    user_id = id;
    user_name = name;
    user_email = email;
    user_username = username;
    user_password = password;
    Anonymos = Anon;
}

int USER::Get_id(){
    return user_id;
}
string USER::Get_username(){
    return user_username;
}
string USER::Get_email(){
    return user_email;
}
string USER::Get_password(){
    return user_password;
}
bool USER::Get_anon(){
    return Anonymos;
}
string USER::tostring()const{
    return to_string(user_id) + "," + user_name + "," + 
    user_email + "," + user_username + "," + user_password + "," + (Anonymos?"Y":"N"); 
}
USER USER::fromstring(string&line){
    stringstream s(line);
    string flag;
    int id;
    string name,email,username,password;
    bool Anon;
    getline(s,flag,',');
    try {
        id = stoi(flag);
    } catch (const std::invalid_argument& e) {
        cout << "Invalid ID in file: " << e.what() << endl;
        return USER();
    }
    // id = stoi(flag);
    getline(s,name,',');
    getline(s,email,',');
    getline(s,username,',');
    getline(s,password,',');
    getline(s,flag,',');
    Anon = (flag=="Y");
    return USER(id,name,email,username,password,Anon);
}
