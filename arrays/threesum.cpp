class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // TC- O(N*N*LOGN)
        // SC= O(n*logn)+o(n);
        // int n=nums.size();
        // set<vector<int>>ans;
        // for(int i=0;i<n;i++)
        // {
        //     unordered_set<int>st;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int target=-(nums[i]+nums[j]);
        //         if(st.find(target)!=st.end())
        //         {
        //             vector<int>temp={nums[i],nums[j],target};
        //             sort(temp.begin(),temp.end());
        //             ans.insert(temp);
        //         }
        //         else
        //         st.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>>res(ans.begin(),ans.end());
        // return res;

        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;

            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0)
                {
                    j++;
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    res.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                    j++;
                    while(j<k && nums[k]==nums[k+1])
                    k--;
                }
            }
        }

        return res;
    }
};