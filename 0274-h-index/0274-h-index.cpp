class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int size=citations.size();
        int maxi=0;
        for(int i=0;i<size;i++)
        {
            if(citations[i]>=size-i)
            {
                maxi=max(maxi, size-i);            
            }
        }
        return maxi;
    }
};