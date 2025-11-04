#include <bits/stdc++.h>
using namespace std;

int main() {

    // Declaration and Initialization

    vector<vector<int>> matrix(3, vector<int>(3)); // This will create a 3x3 matrix where all elements are initialized to 0.

    // Iterating through Matrix

    cout << endl;
    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix[i].size();j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Resizing a 2d Vector
    matrix.resize(5); // Resize the matrix to have 5 rows.

    for(int i=0;i<matrix.size();i++) {
        matrix[i].resize(5);  // Resize the matrix to have 5 columns
    }

    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix[i].size();j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Another initialization with different size and assigning all values at once.

    vector<vector<int>> matrix2(3, vector<int>(4,5)); // 3x4 matrix with all values as 5.

    for(int i=0;i<matrix2.size();i++) {
        for(int j=0;j<matrix2[i].size();j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;


    // Transpose of a matrix
    

    return 0;
}