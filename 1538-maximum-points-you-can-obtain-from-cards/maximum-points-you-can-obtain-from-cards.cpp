class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int score=0;
      
        for(int i=0;i<k;i++)
        score+=cardPoints[i];
        
        int curr=score;
        for(int i=k-1;i>=0;i--)
        {
            curr-=cardPoints[i];
            curr+=cardPoints[n-k+i];

            score=max(score,curr);
        }

        return score;
       
    }
};