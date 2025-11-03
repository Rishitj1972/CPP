#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int>& vec) {  // Using const reference to avoid copying and prevent modification
    for(int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int addVector(vector<int>& vec) {
    for(int& num : vec) { // Using reference to modify original vector
        num += 5;
    }
    return 0;
}

int main() {

    vector<int> numbers = {10, 20, 30, 40, 50};
    printVector(numbers);
    addVector(numbers);

    for(int i : numbers) {
        cout << i << " ";
    }
    
    return 0;
}