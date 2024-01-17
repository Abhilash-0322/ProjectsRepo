#include<iostream>
#include<string>
#include<unistd.h> // for usleep function
using namespace std;

int main() {
    string text = "hello world";
    int n = text.size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << text[j];
            cout.flush(); // Flush the output buffer to ensure immediate display
            usleep(3000); // Introduce a delay of 300,000 microseconds (0.3 seconds)
        }
        cout << endl;
    }

    return 0;
}
