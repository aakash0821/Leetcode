class Solution {
public:
    
   
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev=0;
        int j=0;
        while(n>0)
        {
            if(n&1)
            {
                rev=rev+(1*pow(2, 31-j));
            }
            n>>=1;
            j++;
        }
        
        
        
        return rev;
        
    }
};