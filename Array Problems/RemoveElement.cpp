#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int n = 0;
    
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != val) {
                    nums[n] = nums[i];
                    n++;
                }
            }
    
            return n;
        }
};

int main()
{
    Solution s;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    cout << s.removeElement(nums, val) << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}