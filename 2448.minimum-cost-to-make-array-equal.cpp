/*
 * @lc app=leetcode id=2448 lang=cpp
 *
 * [2448] Minimum Cost to Make Array Equal
 */

// @lc code=start
class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        int n = nums.size();
        long long ans = 1e18;
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push_back(make_pair(nums[i],cost[i]));
        }
        sort(p.begin(),p.end());
        vector<long long>helper(n,0);
        long long c1 = 0;
        long long c2 = 0;
        for(int i=0;i<n;i++){
            helper[i] = abs(p[i].first*c1 - c2);
            c1 += (long long)p[i].second;
            c2 += (long long)p[i].first*(long long)p[i].second; 
        }
         c1 = 0;
         c2 = 0;
        for(int i=n-1;i>=0;i--){
            ans = min(ans,(helper[i]+abs(p[i].first*c1 - c2)));
            c1 += (long long)p[i].second;
            c2 += (long long)p[i].first*(long long)p[i].second;
        }
        return ans;
    }
};
// @lc code=end

