#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double base;
    double rate;
    int extra_hours = 0;

    double base_a = 9.95;
    double base_b = 14.95;
    double base_c = 19.95;

    double rate_a = 2.00;
    double rate_b = 1.00;
    double rate_c = 0.00;

    int base_hours_a = 10;
    int base_hours_b = 20;
    int base_hours_c = 0;

    cout << "Package A: For $" << base_a << " per month, 10 hours of access are provided. Additional hours are $" << rate_a << " per hour." << endl;
    cout << "Package B: For $" << base_b << " per month, 20 hours of access are provided. Additional hours are $" << rate_b << " per hour." << endl;
    cout << "Package C: For $" << base_c << " per month, unlimited access is provided." <<  endl;


    char package;
    int hours_used = -1;

    cout << "Enter desired package (A, B, or C): ";
    cin >> package;
    if (!(package == 'A' || package == 'B' || package == 'C')) {
        cout << "Not a valid package. Exiting..." << endl;
        return 0;
    }

    cout << "Enter number of hours used: ";
    cin >> hours_used;

    if (hours_used < 0 || hours_used > 744) {
        cout << "Number must be between 0 and 744. Exiting..." << endl;
        return 0;
    }

    else {
        if (package == 'A') {
            base = base_a;
            rate = rate_a;
            extra_hours = (hours_used - base_hours_a) * ((hours_used - base_hours_a) > 0);
        }

        else if (package == 'B') {
            base = base_b;
            rate = rate_b;
            extra_hours = (hours_used - base_hours_b) * ((hours_used - base_hours_b) > 0);
        }

        else if (package == 'C') {
            base = base_c;
            rate = rate_c;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Your cost this month is: $" << base + rate*extra_hours << endl;

return 0;
}