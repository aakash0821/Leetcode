class Solution {
public:
    int addDigits(int num) {
        int p=num;
        
        while(p>=10)
        {
            string s=to_string(p);
            int sum=0;
            for(int i=0;i<s.size();i++)
            {
               sum+=s[i]-'0'; 
            }
            p=sum;
        }
        return p;
        
    }
};