#include <iostream>
using namespace std;

int main() {
    // ANSI escape codes for different colors
    const string red = "\033[31m";
    const string green = "\033[32m";
    const string yellow = "\033[33m";
    const string blue = "\033[34m";
    const string reset = "\033[0m";
    const string list[]={"\033[31m","\033[33m","\033[34m","\033[32m"};

    cout << red << "This text is red." << reset << endl;
    cout << green << "This text is green." << reset << endl;
    cout << yellow << "This text is yellow." << reset << endl;
    cout << blue << "This text is blue." << reset << endl;
    cout<<list[3]<<"hi";

    return 0;
}