class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=(l+r)/2;
            int cnt=0;

            for(int num:nums)
            {
                if(num<=mid)
                cnt++;
            }

            if(cnt>mid)
            r=mid;
            else
            l=mid+1;
        } 

        return l;
    }
};