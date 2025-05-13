#include "AppManager.h"
#include <bits/stdc++.h>
using namespace std;


void AppManager::run(){
    while(true){
        loginmenu();
        if(U){
            usermenu();
        }
    }
}

void AppManager::loginmenu(){
    int choice;
    cout << "\n1. Login\n2. Sign Up\n3. Exit\nChoice: ";
    cin >> choice;
    if(choice == 1){
        U = UM.login();
    }
    else if(choice==2){
        U = UM.signup();
    }
    else{
        exit(0);
    }
}

void AppManager::usermenu(){
    while(true){
        int choice;
        cout << "\n1. Ask Question\n2. Answer Question\n3. View Questions\n4. Delete Question\n5. Logout\nChoice: ";
        cin >> choice;
        if(choice==1){
            QM.AskQuestion(*U);
        }
        else if(choice == 2){
            QM.AnswerQuestion(*U);
        }
        else if(choice == 3){
            QM.ViewQuestion(*U);
        }
        else if(choice == 4){
            QM.DeleteQuestion(*U);
        }
        else if(choice == 5){
            U = nullptr;
            return;
        }
    }
}
