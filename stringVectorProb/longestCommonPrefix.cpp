#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<string> words = {"flower","flow","flight"};
    
    string result = words[0];
    
    for(int i=0;i<words.size();i++) {
        
        string word = words[i];
        string temp = "";
        
        
        // int minLength = min(word.size(),result.size());
        
        for(int j=0;j<word.size();j++) {
            if(word[j] == result[j]) {
                temp += result[j];
            } else {
                break;
            }   
        }
        result = temp;
    }
    cout << result;
    return 0;
}