/*
 * @lc app=leetcode id=1283 lang=cpp
 *
 * [1283] Find the Smallest Divisor Given a Threshold
 */

// @lc code=start
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l = 1;
        int r = nums[n-1];
        while(l<=r){
            int mid = l+(r-l)/2;
            int s =0 ;
            for(int i=0;i<n;i++){
                s+=(nums[i] + mid -1)/mid;
            }
            if(s<=threshold){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return l;

    }
};
// @lc code=end

