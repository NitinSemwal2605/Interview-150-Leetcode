#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> m;
            
            m['I'] = 1;
            m['V'] = 5;
            m['X'] = 10;
            m['L'] = 50;
            m['C'] = 100;
            m['D'] = 500;
            m['M'] = 1000;
            
            int ans = 0;
            
            for(int i = 0; i < s.length(); i++){
                //smaller before larger means subtraction
                if(m[s[i]] < m[s[i+1]]){ 
                    ans -= m[s[i]];
                }
                else{
                    ans += m[s[i]];
                }
            }
            return ans;
        }
    };

int main (){
    Solution s;
    cout << s.romanToInt("III") << endl;
    cout << s.romanToInt("IV") << endl;
    cout << s.romanToInt("IX") << endl;
    cout << s.romanToInt("LVIII") << endl;
    cout << s.romanToInt("MCMXCIV") << endl;
    return 0;
}