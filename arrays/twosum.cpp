class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        // vector<int>ans;
        // for(int i=0;i<n;i++)
        // {
        //     int diff=target-nums[i];
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[j]==diff)
        //         {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        //    if(!ans.empty())
        //    break;
            
        // }

        // return ans;



        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        mp[nums[i]]=i;

        for(int i=0;i<n;i++)
        {
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end() && mp[diff]!=i)
            return {i,mp[diff]};
        }
        
        return {};
    }
};