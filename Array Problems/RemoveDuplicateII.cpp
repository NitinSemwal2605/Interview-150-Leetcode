#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int removeDuplicates(vector<int> &nums){
        int k = 2;

        if (nums.size() <= 2)
            return nums.size();

        for (int i = 2; i < nums.size(); i++){
            if (nums[i] != nums[k - 2]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main(){
    Solution s;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    cout << s.removeDuplicates(nums) << endl;
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}