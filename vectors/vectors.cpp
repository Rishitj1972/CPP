#include <bits/stdc++.h>
using namespace std;

int main() {

    // Vector Creation
    vector<int> vec1; // Empty vector
    vector<int> vec2(5); // Vector of size 5 with default values (0)
    vector<int> vec3(5, 10); // Vector of size 5 with all values initialized to 10
    vector<int> vec4 = {1, 2, 3, 4, 5}; // Vector initialized with a list of values
    vector<int> vec5(vec4); // Copy of vec4


    // Accessing Elements
    cout << "First element of vec4: " << vec4[0] << endl;
    cout << "Second element of vec4: " << vec4.at(1) << endl;
    // another method.
    cout << "First Element of vec4 using front(): " << vec4.front() << endl;
    cout << "Last Element of vec4 using back(): " << vec4.back() << endl;


    // through loops
    for(int i : vec4) {
        cout << i << " ";
    }
    cout << endl;



    // Adding and Removing Elements
    vec1.push_back(100); // Add 100 to the end of vec1
    vec1.push_back(200); // Add 200 to the end of vec1
    cout << "vec1 after push_back: ";
    for(int i : vec1) {
        cout << i << " ";
    }
    cout << endl;
    vec1.pop_back(); // Remove the last element
    cout << "vec1 after pop_back: ";
    for(int i : vec1) {
        cout << i << " ";
    }
    cout << endl;


    // Inserting elements
    vector<int> vec6 = {1,2,3,4,5};
    vec6.insert(vec6.begin() + 2, 99); // Insert 99 at index 2
    cout << "\nvec6 after insert: ";
    for(int i : vec6) {
        cout << i << " ";
    }
    cout << endl;



    // Removing elements
    vec6.erase(vec6.begin() + 2); // Remove element at index 2
    cout << "vec6 after erase: ";
    for(int i : vec6) {
        cout << i << " ";
    }
    cout << endl;



    // Size and Capacity
    /* size is the number of elements, capacity is the allocated memory size. */
    cout << "Size of vec6 is " << vec6.size() << endl;
    cout << "Capacity of vec6 is " << vec6.capacity() << endl;



    // Sort Elements in ascending
    vector<int> vec7 = {5, 2, 8, 1, 4};
    sort(vec7.begin(), vec7.end());
    cout << "vec7 after sorting: ";
    for(int i : vec7) {
        cout << i << " ";
    }
    cout << endl;



    // Sort Elements in descending
    sort(vec7.rbegin(),vec7.rend());
    cout << "vec7 after sorting in descending: ";
    for(int i : vec7) {
        cout << i << " ";
    }



    // Reverse Elements
    reverse(vec7.begin(), vec7.end());
    cout << "\nvec7 after reversing: ";
    for(int i : vec7) {
        cout << i << " ";
    }
    cout << endl;



    // Find Elements
    /* the auto keyword is used to automatically deduce the type of the variable
    it is particularly useful for iterators and complex data types
    the distance function is used to find the distance between two iterators */

    auto it = find(vec7.begin(), vec7.end(), 2);
    if(it != vec7.end()) {
        cout << "Element 2 found at index: " << distance(vec7.begin(), it) << endl;
    } else {
        cout << "Element 2 not found" << endl;
    }



    // Clear Vector
    vec7.clear();
    cout << "Size of vec7 after clear: " << vec7.size() << endl;



    // Resize Vector
    vec7.resize(3,100); // Resize vec7 to size 3, new elements initialized to 100
    cout << "vec7 after resize: ";
    for(int i : vec7) {
        cout << i << " ";
    }
    cout << endl;



    // Iterators
    cout << "\nUsing iterator to traverse: ";
    vector<int> vec8 = {10, 20, 30, 40, 50};
    for (auto it = vec8.begin(); it != vec8.end(); ++it)
        cout << *it << " ";
    cout << endl;


    // Check if Empty
    cout << "\nIs vec1 empty? " << (vec1.empty() ? "Yes" : "No") << endl;
    cout << "Is vec3 empty? " << (vec3.empty() ? "Yes" : "No") << endl;


    

    return 0;
}