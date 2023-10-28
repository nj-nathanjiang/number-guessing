#include <iostream>

using namespace std;

int main() {
    int num = rand() % 100 + 1, guess;
    while (true) {
        cout << "Guess a number from 1 to 100: ";
        cin >> guess;
        if (guess == num) {
            cout << "Good job!" << endl;
            break;
        } else if (guess < num) {
            cout << "Too low." << endl;
            continue;
        } else {
            cout << "Too high." << endl;
            continue;
        }
    }
}
