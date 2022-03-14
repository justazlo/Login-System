#include <iostream>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <string.h>

#include "configuration/banner.h"
#include "configuration/login.h"
using namespace std;

int main() {
    string user;
    string pass;
    system("clear");        
    cout << "Enter Your Username: " << endl;
    cin >> user;
    system("clear");
    cout << "Enter Your Password: " << endl;
    cin >> pass;
    if (user == username && pass == password) {
        system("clear");
        cout << "Login Success!" << endl;
        this_thread::sleep_for(chrono::milliseconds(3000));
        system("clear");
        banner();
        cout << "Hello, World! (CTRL + C)" << endl;
        usleep(-1);
    }
    else {
        system("clear");
        cout << "Login Failure..." << endl;
        this_thread::sleep_for(chrono::milliseconds(3000));
    }
    return EXIT_SUCCESS;
}
