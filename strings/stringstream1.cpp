// Conversion from Integer to String and vice versa using StringStream in C++17

#include <bits/stdc++.h>
using namespace std;

vector<int> parseInt(string str) {

    int num; // Variable to store the converted integer
    char ch; // Variable to store the delimiter character

    stringstream ss(str); // Create a stringstream object with the input string
    vector<int> result; // Vector to store the converted integers

    // Loop to extract integers from the stringstream

    // ss >> num reads an integer from the stringstream

    while(ss >> num) { 
        result.push_back(num); // Add the converted integer to the result vector
        ss >> ch; // Read and discard the delimiter character
    }
    return result; // Return the vector of converted integers 
}




vector<string> parseString(int num) {

    stringstream ss; // Create an empty stringstream object
    vector<string> result; // Vector to store the converted strings

        ss << num; // Insert the integer into the stringstream

        string str = ss.str(); // Get the string representation from the stringstream

        result.push_back(str); // Add the string to the result vector

        ss.str(""); // Clear the stringstream for the next iteration
    
    return result; // Return the vector of converted strings
}


int main() {

    // String to Integer Conversion
    string str = "123,456,789";
    vector<int> numbers = parseInt(str);

    cout << "Converted Integers:" << endl;
    for(int i=0;i<numbers.size();i++) {
        cout << numbers[i] <<endl; 
    }

    // Integer to String Conversion
    int num = 100;
    vector<string> strNumbers = parseString(num);

    cout << "Converted Strings:" << endl;
    for(int i=0;i<strNumbers.size();i++) {
        cout << strNumbers[i] <<endl; 
    }

    return 0;
}