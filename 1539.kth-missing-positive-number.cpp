/*
 * @lc app=leetcode id=1539 lang=cpp
 *
 * [1539] Kth Missing Positive Number
 */

// @lc code=start
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0;
        int n = arr.size();
        int r = n-1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(arr[mid] - mid - 1 < k) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return l+k;
    }
};
// @lc code=end

