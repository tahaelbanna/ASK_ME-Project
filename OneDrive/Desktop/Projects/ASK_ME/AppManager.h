#ifndef APPMANGER_H
#define APPMANGER_H
#include "UserManager.h"
#include "QuestionManager.h"
#include <bits/stdc++.h>
using namespace std;

class AppManager{
    private:
        UserManager UM;
        QuestionManager QM;
        USER* U = nullptr;
    public:
        void run();
        void loginmenu();
        void usermenu();
};

#endif