class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int curr=0;
        for(int i=1;i<nums.size();i++)
        {
           if(nums[i]!=nums[curr])
           {
            curr++;
            nums[curr]=nums[i];
           }
           else
           {
            continue;
           }
        }

        return curr+1;
    }
};