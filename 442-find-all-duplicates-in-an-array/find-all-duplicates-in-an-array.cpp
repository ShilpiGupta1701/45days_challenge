class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++)
        freq[nums[i]]++;

        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]==2)
            res.push_back(i);
        }

        return res;
    }
};