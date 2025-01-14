class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        vector<int>c;
        int cmn=0;
        for(int i=0;i<A.size();i++)
        {
            if(++mp[A[i]] == 2)
            cmn++;
            if(++mp[B[i]]==2)
            cmn++;
            c.push_back(cmn);
        }
        return c;

    }
};