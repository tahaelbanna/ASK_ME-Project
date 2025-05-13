#ifndef USERMANGER_H
#define USERMANGER_H

#include "User.h"
#include <bits/stdc++.h>
using namespace std;

class UserManager{
    private:
        vector<USER>users;
        int initid = 0;
        void loaduser();
        void saveuser();
        USER*findusername(string&s);
    public:
        UserManager();
        USER*login();
        USER*signup();
};
#endif