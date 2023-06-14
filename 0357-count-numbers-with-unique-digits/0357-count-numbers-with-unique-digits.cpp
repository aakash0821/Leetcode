class Solution {
public:
    
    
    int countNumbersWithUniqueDigits(int n) {
       if(n==0)
        {
            return 1;
        } 
        else if(n==1)
        {
            return 10;
        }
        else if(n==2)
        {
            return 91;
        }
        else{
            int sum=91;
            int product=9*9;
            int str=8;
            for(int i=3;i<=n;i++)
            {
                product=product*str;
                sum+=product;
                str--;
            }
            return sum;
        }
    }
};