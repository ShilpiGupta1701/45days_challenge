class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxi=INT_MIN;
        while(i<=j)
        {
            if(height[i]<=height[j])
            {
                int capacity=(j-i)*height[i];
                maxi=max(maxi,capacity);
                i++;
            }
            else
            {
                int capacity=(j-i)*height[j];
                maxi=max(maxi,capacity);
                j--;
            }
        }
        return maxi;
    }
};