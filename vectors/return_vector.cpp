#include <iostream>
#include <vector>
using namespace std;

vector<int> createVector(int n) {
    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i * 10);
    return v;
}

int main() {
    
    vector<int> result = createVector(5); // Function returns a vector of integers

    cout << "Vector returned from function: ";
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
