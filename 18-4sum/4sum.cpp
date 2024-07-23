class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        if(nums.empty())
        return res;

        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            long long sum3=target-nums[i];   
            for(int j=i+1;j<n;j++)
            {
                long long sum2=sum3-nums[j];
                int k=j+1;
                int r=n-1;
                while(k<r)
                {
                    long long sum=nums[k]+nums[r];
                    if(sum<sum2)
                    k++;
                    else if(sum>sum2)
                    r--;
                    else
                    {
                        res.push_back({nums[i],nums[j],nums[k],nums[r]});
                        k++;
                        r--;
                        while(k<r && nums[k]==nums[k-1])
                        k++;
                        while(k<r && nums[r]==nums[r+1])
                        r--;
                    }
                }
                while(j+1<n && nums[j]==nums[j+1])
                j++;
            }
            while(i+1<n && nums[i]==nums[i+1])
            i++;
        }

        return res;
    }
};