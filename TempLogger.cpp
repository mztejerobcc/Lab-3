#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outputFile;
    outputFile.open("temp_log.txt");

    int days;
    
    cout << "How many days of temperatures would you like to record? ";
    cin >> days;

    for (int i = 1; i <= days; i++) {
        double temp;

        cout << "Enter temperature for Day " << i << ": ";
        cin >> temp;

        outputFile << fixed << setprecision(1);
        outputFile << temp << endl;
    }

    outputFile.close();

    return 0;
}