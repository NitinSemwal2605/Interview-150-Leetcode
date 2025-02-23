#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = "";
        sort(strs.begin(), strs.end());

        int n = strs.size();
        string first = strs[0];
        string last = strs[n - 1];
        int mini = min(first.size(), last.size());

        for (int i = 0; i < mini; i++)
        {
            if (first[i] != last[i])
            {
                return ans;
            }
            ans += first[i]; // If Same then Add
        }
        return ans;
    }
};

int main(){
    vector<string> strs = {"flower", "flow", "flight"};
    Solution obj;
    cout << obj.longestCommonPrefix(strs);
}