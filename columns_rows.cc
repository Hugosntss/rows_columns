#include <iostream>
#include <iomanip>
using namespace std;

/*

This program has the task to show how many students 
the courses JavaScript and C++ have in total

*/



int main() {
    cout << left << setw(15) << "Course" << setw(15) << "Students" << endl; //header using iomanip libraly 

    cout << left << setw(15) << "C++" << right << setw(5) << 100 << endl; // the setw(10) is to make a space between numbers
    cout << left << setw(15) << "JavaScript" << right << setw(5) << 50 << endl;

    return 0;
}
