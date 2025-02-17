#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            vector<int> temp(nums.size());
            int n = nums.size();
            for(int i=0;i<n;i++){
                temp[(i+k)% nums.size()] = nums[i];
            }
            nums = temp;
        }
    
    };

int main(){
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    s.rotate(nums, 3);
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    return 0;
}