#ifndef USER_H
#define USER_H

#include<bits/stdc++.h>
using namespace std;

class USER{
    private:
        int user_id;
        string user_name;
        string user_email;
        string user_username;
        string user_password;
        bool Anonymos;
    public:
        USER();
        USER(int user_id,string user_name,string user_email,string user_username,string user_password,bool Anonymos);
        int Get_id();
        string Get_username();
        string Get_email();
        string Get_password();
        bool Get_anon();
        string tostring()const;
        static USER fromstring(string&line);
};

#endif