/*
 * @lc app=leetcode id=1482 lang=cpp
 *
 * [1482] Minimum Number of Days to Make m Bouquets
 */

// @lc code=start
class Solution {
public:
    bool isPossible(vector<int>bloomDay,int mid,int m,int k){
        long long int f=0;
        long long int b=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                f++;
                if(f==k){
                    f =0;
                    b++;
                }
            }
            else{
                f=0;
            }
        }
            if(b>=m){
                return true;
            }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int n = bloomDay.size();
        if(m>n/k){
            return -1;
        }
        
            int lower = *min_element(bloomDay.begin(),bloomDay.end());
            int upper = *max_element(bloomDay.begin(),bloomDay.end());
            while(lower<upper){
                int mid = lower+(upper-lower)/2;
                if(isPossible(bloomDay,mid,m,k)){
                    upper = mid;
                }
                else{
                    lower = mid+1;
                }
            }
            return lower;
        
    }
};
// @lc code=end

