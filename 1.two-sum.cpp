/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> as = nums;
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            if(nums[l]+nums[r] == target){
                return {l,r};
            }
            else if(nums[l]+nums[r] > target){
                r--;
            }
            else{
                l++;
            }
        }
        return{-1,-1};
    }
};
// @lc code=end

