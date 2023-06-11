class Solution {
public:
    
    //SIEVE ALGORITHM
    int countPrimes(int n) {
        
        int cnt=0;
        vector<bool> vec(n+1, true);
        
        vec[0]=vec[1]=false;
        
        for(int i=2;i<n;i++)
        {
            if(vec[i])
            {
                cnt++;
                for(int j=2*i;j<n;j=j+i)
                {
                    vec[j]=false;
                }

            }
        }
        return cnt;
    }
        
};