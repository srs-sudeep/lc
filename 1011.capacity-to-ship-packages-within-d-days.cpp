/*
 * @lc app=leetcode id=1011 lang=cpp
 *
 * [1011] Capacity To Ship Packages Within D Days
 */

// @lc code=start
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long n = weights.size();
        
        long long l = INT_MIN;
        long long r = 0;
        for(int i=0;i<n;i++){
            r+=weights[i];
            l = max(l,(long long)weights[i]);
        }
        long long ans = INT_MAX;
        while(l<=r){
            long long mid = l + (r-l)/2;
            long long i = 0;
            long long s = 0;
            long long d = 1;
            while(i<n && s<=mid){
                s+=weights[i++];
                if(s>mid){
                    d++;
                    s = 0;
                    i--;
                }
            }
            if(d<=days){
                ans = min(ans,mid);
                r = mid-1;
            }
            else if(d>days){
                l = mid+1;
            }
        }
        return ans;
    }
};
// @lc code=end

