/*
 * @lc app=leetcode id=299 lang=cpp
 *
 * [299] Bulls and Cohttps://docs.google.com/forms/d/e/1FAIpQLScGsSbNy4xnl0qAiTdIJysGrPuPUHxaz17qYtczt0ZCHUeCCg/viewform?usp=sharingws
 */

// @lc code=start
class Solution {
public:
    string getHint(string secret, string guess) {
        int b = 0;
        int a = 0;
        int n = secret.size();
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<n;i++){
            if(secret[i] == guess[i]){
                b++;
            }
            else{
                mp2[secret[i]] >0 ? a++,mp2[secret[i]]--:mp1[secret[i]]++;
                mp1[guess[i]]>0?a++,mp1[guess[i]]--:mp2[guess[i]]++;
                
            }
        }
        return to_string(b) + "A" + to_string(a) + "B";
    }
};
// @lc code=end

