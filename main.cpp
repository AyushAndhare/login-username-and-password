#include <iostream>

using namespace std;

int main ()
{
    string username ;

    double password ;

    cout<< "Enter username:"; cin>> username;

    cout<< "Enter password:";cin>> password;

    if(username == "admin") {

        if (password == 12345) {

            cout << "You have successfully logged in " << endl;

        } else {

            cout << "invalid username or password" << endl;
        }
    }else{
            cout<< "invalid username or password" <<endl;
    }

    return 0;

    }

