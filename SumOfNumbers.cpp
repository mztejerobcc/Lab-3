#include <iostream>
using namespace std;

int main () {
    int sum = 0;
    int num;

    while (num >=0) {
        cout << "Enter a positive number to add to the sum, or a negative number to quit: ";
        cin >> num;

        if (num >= 0) {
            sum = sum + num;
        }
    }

    cout << "\nThe final sum is: " << sum << endl;

    return 0;
}