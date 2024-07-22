class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
         
        int sum=0;
        int rem=0;
        unordered_map<int,int>mp;
        mp[rem]++;

        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            rem=sum%k;
            if(rem<0)
            rem+=k;

           if(mp.find(rem)!=mp.end())
           count+=mp[rem];

           mp[rem]++;
        }


        return count;
    }
};