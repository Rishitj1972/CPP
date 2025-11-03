// Program to combine multiple data types using stringstream

#include<bits/stdc++.h>
using namespace std;

int main() {

    stringstream ss; // Create an empty stringstream object

    int rollNo = 48;
    string name = "Rishi  TJ";
    float marks = 89.5;
    char grade = 'A';

    ss >> rollNo >> name >> marks >> grade; // Insert multiple data types into the stringstream

    /*
    The >> (extraction) operator in stringstream reads data from left to right, in order, and stores it in the variables you specify.
    but also making sure each value matches the expected data type of the variable.
    */

    cout << "Roll No: " << rollNo << " Name: " << name << " Marks: " << marks << " Grade: " << grade << endl;

    return 0;
}