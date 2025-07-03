#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t index = haystack.find(needle);
        
        if (index != string::npos) {
            return static_cast<int>(index); 
        }
        return -1; // if not found, return -1
    }
};

int main() {
    string haystack = "hello";
    string needle = "ll";
    Solution obj;
    cout << obj.strStr(haystack, needle);
}