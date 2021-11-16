// Basiccswitchprogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int opt;

    cout << "Hi. This is your DBIT Sem 1 Timetable (Sep-Dec 2021)";
    cout << "\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday"<<endl<<endl;
    cout << "Please select day of choice (1 to 6)" << endl;
    cin >> opt;

    switch (opt) {
    case 1:
        cout << "Monday Classes\n................." << endl;
        cout << "\t1. DBIT 1106: Math for biz" << endl;
        cout << "\t2. DBIT1102: Accounting" << endl;
        break;

    case 2:
        cout << "Tuesday Classes\n................." << endl;
        cout << "\t1. DBIT 1106: Intro to Programming" << endl;
        cout << "\t2. DBIT1102: Ethics" << endl;
        break;

    case 3:
        cout << "Wednesday Classes\n................." << endl;
        cout << "\t1. DBIT 1106: Business Communicaion" << endl;
        cout << "\t2. DBIT1102: Maths" << endl;
        break;

    case 4:
        cout << "Thursday Classes\n................." << endl;
        cout << "\t1. DBIT 1106: Ethics" << endl;
        cout << "\t2. DBIT1102: Accounting" << endl;
        break;

    case 5:
        cout << "Friday Classes\n................." << endl;
        cout << "\t1. DBIT 1106: Fundamentals of IT" << endl;
        cout << "\t2. DBIT1102: Business Communication" << endl;
        break;

    case 6:
        cout << "Saturday Classes\n................." << endl;
        cout << "\t1. DBIT 1106: Fundamentals of IT" << endl;
        cout << "\t2. DBIT1102: Intro to Programming" << endl;
        break;

    default:
        cout << "Invalid Input";

    }
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
