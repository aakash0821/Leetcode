class Solution {
public:
    int hammingWeight(uint32_t n) {
        int total=0;
        while(n>0)
        {
            if(n&1)
            {
                total++;
            }
            n>>=1;
        }
        return total;
    }
};