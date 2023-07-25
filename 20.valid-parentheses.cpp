/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (auto i : s)
        {
            if (i == '(' || i == '{' || i == '[')
            {
                st.push(i);
            }
            else
            {
                if (st.empty() || (i == ')' && st.top() != '(') || (i == '}' && st.top() != '{') || (i == ']' && st.top() != '['))
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
// @lc code=end
