#include<bits/stdc++.h>
using namespace std;

class VectorOps {
    private:
        vector<int> vec;
    public:
        // setter method to initialize vector
        void setVector(const vector<int>& v) {
            vec = v;
        }

        // method to display vector elements
        void displayVector() {
            for (int elem : vec) { 
                cout << elem << " ";
            }
            cout << endl;
        }

};


int main() {

    VectorOps vops;
    vector<int> myVec = {1, 2, 3, 4, 5};
    vops.setVector(myVec);
    vops.displayVector();

    return 0;
}