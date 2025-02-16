#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int> &nums){
        int i = 0;
        int n = nums.size();
        for (int j = 1; j < n; j++){
            if (nums[j] != nums[i]){
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1, 1, 2};
    cout << s.removeDuplicates(nums) << endl;
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}