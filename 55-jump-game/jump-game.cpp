class Solution {
public:
    bool fun(int i,int n,vector<int>&nums,vector<int>&dp)
    {
        if(i==n-1)
        return true;

        if(nums[i]==0)
        return false;
        
        if(dp[i]!=-1)
        return dp[i];


        int maxi = i+nums[i];

        for(int j=i+1;j<=maxi;j++)
        {
            if(j<n && fun(j,n,nums,dp))
            return dp[i]=true;
        }

        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return fun(0,n,nums,dp);

    }
};