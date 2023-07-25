/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int temp = nums[0] + nums[1] + nums[2];
        for(int i=0;i<n-2;i++){
        int j = i+1;
        int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(temp-target)){
                    temp = sum;
                }
                if(sum==target){
                    return sum;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    j++;

                }
            }
        }
        return temp;
    }
};
// @lc code=end

