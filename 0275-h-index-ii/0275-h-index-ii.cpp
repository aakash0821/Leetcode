class Solution {
public:
    int hIndex(vector<int>& citations) {
        int maxi=0;
        int size=citations.size();
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