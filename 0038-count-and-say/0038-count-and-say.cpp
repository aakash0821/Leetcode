class Solution {
public:
    
    string solve(string name, int n, string mapping[])
    {
        if(n<=1)
        {
            return name;
        }
        int temp;
        int total=1;
        char pre=name[0];
        string test="";
        for(int i=1;i<name.length();i++)
        {
            if(name[i]==pre)
            {
                total++;
            }
            else
            {
                temp=pre-'0';
                test=test+mapping[total]+mapping[temp];
                pre=name[i];
                total=1;
            }
        }
        temp=pre-'0';
        test=test+mapping[total]+mapping[temp];
        name=test;
        return solve(name, n-1, mapping);
        
    }
    string countAndSay(int n) {
        string mapping[10]={"","1","2","3","4","5","6","7","8","9"};
        string name="1";
        if(n==1)
        {
            return name;
        }
        else
        {
            return solve(name, n, mapping);
        }
    }
};