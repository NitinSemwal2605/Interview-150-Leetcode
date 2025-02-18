#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
    int maxi = 0;
    int n = nums.size();

    for(int i=0;i<n;i++){
        if(i>maxi){
            return false;
        }
        maxi = max(maxi, i+nums[i]);
        if(maxi >= n-1){
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {2,3,1,1,4};
    cout<<canJump(nums)<<endl;
    return 0;
}