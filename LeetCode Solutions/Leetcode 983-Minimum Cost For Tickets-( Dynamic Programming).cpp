// Language    : C++ 17
// Problem Name: LeetCode - 983. Minimum Cost For Tickets
// Prolem Link : https://leetcode.com/problems/minimum-cost-for-tickets/
// Verdict     : ACCEPTED
// Roll        : 1507064
class Solution
{
public:
    int mincostTickets(vector<int>& days, vector<int>& costs)
    {
        int dp[366]={0};
        int n = days.size();

        for(int i=0; i<n; i++)
            dp[days[i]] = costs[0];

        for (int i = days[0]; i <= days[n-1]; i++)
        {
            dp[i] += dp[i - 1];
            dp[i] = min(dp[i], costs[1] + dp[max(0, i - 7)]);
            dp[i] = min(dp[i], costs[2] + dp[max(0, i - 30)]);
        }
        return dp[days[n - 1]];
    }
};

