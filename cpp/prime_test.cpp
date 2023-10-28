#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;  // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;  // Return false if num has a factor
        }
    }
    return true;  // Return true if no factors were found
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 > num2) {
        swap(num1, num2);  // Swap if num1 is greater than num2
    }

    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            cout << i << " is prime." << endl;
        }
    }

    return 0;
}