/*
 * @lc app=leetcode id=1027 lang=cpp
 *
 * [1027] Longest Arithmetic Subsequence
 */

// @lc code=start
class Solution
{
public:
    int longestArithSeqLength(vector<int> &nums)
    {
        int maxi = 2;
        int n = nums.size();
        vector<map<int, int>> mp(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int diff = nums[i] - nums[j];
                
                mp[i][diff] = mp[j].count(diff) ? mp[j][diff] + 1 : 2;
                // mp[nums[j]-nums[i]][nums[i]]++;
                maxi = max(maxi, mp[i][diff]);
            }
        }
        return maxi;
    }
};
// @lc code=end
