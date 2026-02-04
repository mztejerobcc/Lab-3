#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("temp_log.txt");

    float temp;
    float sum = 0;
    int day = 0;

    while (inputFile >> temp) {
        day++;
        sum = sum + temp;
    }

    cout << fixed << setprecision(1);
    cout << "Temperature analyzed for " << day << " days." << endl;
    cout << "The average temperature was: " << sum / day << " degrees." << endl;

    inputFile.close();
    return 0;
}