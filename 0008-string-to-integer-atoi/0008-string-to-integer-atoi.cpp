
#include<bits/stdc++.h>
class Solution {
public:
    int clamp(long long val)
    {
        if(val>=INT_MAX)
        {
            return INT_MAX;
        }
        else if(val<=INT_MIN)
        {
            return INT_MIN;
        }
        return val;
    }
    int myAtoi(string s) {
        long long  val=0;
        bool flag=false;
        
        
        int i=0;
        
        
        while(i<s.length())
        {
            if(isdigit(s[i]))
            {
                while(i<s.length())
                {
                    if(isdigit(s[i]))
                    {
                        val=val*10+(s[i]-'0');
                        if(clamp(val)==INT_MAX || clamp(val)==INT_MIN)
                        {
                                val=clamp(val);
                                return val;
                        }
                        i++;
                    }
                    else
                    {
                        val=clamp(val);
                        return val;
                    }
                }
                val=clamp(val);
                            return val;
            }
            else if((s[i]=='+' || s[i]=='-') && i+1<s.length())
            {
                char ch=s[i];
                int sign=1;
                if(ch=='-')
                {
                    sign=-1;
                }
                i++;
                if(!isdigit(s[i]))
                {
                    return 0;
                }
                else
                {
                    while(i<s.length())
                    {
                        if(isdigit(s[i]))
                        {
                            val=val*10+(s[i]-'0');
                            if(clamp(sign*val)==INT_MAX || clamp(sign*val)==INT_MIN)
                            {
                                val=clamp(sign*val);
                                return val;
                            }
                            i++;
                        }
                        else
                        {
                            //val=sign*val;
                            val=sign*val;
                            val=clamp(val);
                            return val;
                        }
                    }
                    val=sign*val;
                    val=clamp(val);
                    return val;
                }
            }
            //else if()
            else if(isalnum(s[i]) || s[i]=='.')
            {
                return val;
            }
            i++;
        }
        
        return val;
    }
};
                
            
            