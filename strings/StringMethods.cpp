#include<bits/stdc++.h>
using namespace std;

int main() {

    string s1 = "Rishi";
    string s2("TJ");
    string s3 = s1 + string(" ") + s2;
    cout << "Concatenation : " << s3 << endl; // Concatenation

    cout << "Length of s3 : " << s3.length() << endl; // Length

    // Accessing characters
    cout << "First Character : " << s3[0] << endl;
    cout << "Second Character : " << s3.at(1) << endl;
    cout << "Last Character : " << s3.back() << endl;

    // Substring
    cout << "Substring (0,5) : " << s3.substr(0,5) << endl;

    // Find
    size_t pos = s3.find("TJ");

    // Replace part of string
    string rep = s3;
    rep.replace(0, 5, "R");
    cout << "After Replacement : " << rep << endl;

    // Insert
    string ins = s3;
    ins.insert(5, ".");
    cout << "After Insertion : " << ins << endl;

    // Erase
    string str = "Programming";
    str.erase(7,11);
    cout << "After Erase : " << str << endl;

    // Append
    string app = "Hello";
    app.append(" World");
    cout << "After Append : " << app << endl;

    // Compare

    /* the function compare() is comparing the two strings lexicographically.
    that means character by character using their ASCII (or Unicode) values. */  

    string cmp1 = "Apple";
    string cmp2 = "Banana";
    int result = cmp1.compare(cmp2);
    if(result == 0) {
        cout << cmp1 << " is equal to " << cmp2 << endl;
    } else if(result < 0) {
        cout << cmp1 << " is less than " << cmp2 << endl;
    } else {
        cout << cmp1 << " is greater than " << cmp2 << endl;
    }

    // Reverse 
    string rev = "ABCDE";
    reverse(rev.begin(), rev.end());
    cout << "Reversed String : " << rev << endl;

    // Sort Characters
    string sortStr = "dcba";
    sort(sortStr.begin(), sortStr.end());
    cout << "Sorted String : " << sortStr << endl;

    // Remove spaces using erase and remove
    string spaceStr = "a b c d e";
    spaceStr.erase(remove(spaceStr.begin(), spaceStr.end(), ' '), spaceStr.end());
    cout << "String after removing spaces : " << spaceStr << endl;

    // Convert number to String
    int num = 123;
    string numStr = to_string(num);
    cout << "Number to String : " << numStr << endl;

    // Convert String to number
    string number = "123";
    int number2 = stoi(number);
    cout << "String to Number : " << number2 << endl;

    // count frequency of each character
    string freqStr = "aabbccddeeff";
    vector<int> freq(26,0);
    for(char c : freqStr) {
        freq[c - 'a']++;
    }
    cout << "Frequency of 'b': " << freq['b' - 'a'] << endl;

    // 🌟 Check if substring exists
    string mainStr = "competitive programming";
    if (mainStr.find("pro") != string::npos)
        cout << " 'pro' found!" << endl;    

    // 🌟 Uppercase / Lowercase
    string caseStr = "Code";
    for (char &c : caseStr) c = toupper(c);
    cout << " Uppercase: " << caseStr << endl;

    for (char &c : caseStr) c = tolower(c);
    cout << " Lowercase: " << caseStr << endl;

    return 0;
}