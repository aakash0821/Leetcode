class Solution {
public:
    double getpow(double x, int n)
    {
        if(n==0)
        {
            return 1;
            
        }
        if(n==1)
        {
            return x;
        }
        
        double ans=getpow(x,n/2);
        if(n%2==0)
        {
            return ans*ans;
        }
        else
        {
            return ans*ans*x;
        }
    }
    double myPow(double x, int n) {
        
        double result=getpow(x,n);
        if(n>=0)
        {
            return result;
        }
        else
        {
            return(1/result);
        }
    }
};