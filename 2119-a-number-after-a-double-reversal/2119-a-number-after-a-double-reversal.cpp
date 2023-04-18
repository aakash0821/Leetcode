class Solution {
public:
    
    int reverse(int num)
    {
        int ans=0;
        while(num>0)
        {
            int rem=num%10;
            ans=ans*10+rem;
            num=num/10;
        }
        return ans;
    }
    bool isSameAfterReversals(int num) {
        if(num==0)
        {
            return true;
        }
        
        int ans=reverse(num);
        int ans2=reverse(ans);
        if(ans2==num)
        {
            return true;
        }
        return false;
        
       
    }
};