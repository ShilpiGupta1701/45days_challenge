class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0,count=0;
        int n=nums.size();
        mp[sum]=1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int rem=sum-k;
            if(mp.find(rem)!=mp.end())
            {
                count+= mp[rem];
            }

            mp[sum]++;
        }

        return count;
    }
};