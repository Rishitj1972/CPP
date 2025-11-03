#include <bits/stdc++.h>
using namespace std;

class VectorOps {
    public:
        void display(const vector<int>& vec) {
            for(int val : vec) {
                cout << val << " ";
            }
            cout << endl;
        }

        void addElement(vector<int>& vec, int element) {
            vec.push_back(element);
            cout << "Element " << element << " added." << endl;
        }
};


int main() {

    vector<int> data  {1, 2, 3, 4, 5};
    VectorOps v;
    v.display(data);
    v.addElement(data, 6);
    v.display(data);

    return 0;
}