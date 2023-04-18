class Solution {
public:
    bool isValid(string s) {
       
        if(s.length()%2!=0)
        {
            return false;
        }
        else
        {
            map<char, int> mp;
            vector<char> v;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]==']')
                {
                    if(v.empty())
                    {
                        return false;
                    }
                    else
                    {
                        if(v.back()=='[' && mp['[']>=1)
                        {

                            v.pop_back();
                            mp['[']=mp['[']-1;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                else if(s[i]==')')
                {
                    if(v.empty())
                    {
                        return false;
                    }
                    else
                    {
                        if(v.back()=='(' && mp['(']>=1)
                        {

                            v.pop_back();
                            mp['(']=mp['(']-1;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                else if(s[i]=='}')
                {
                    if(v.empty())
                    {
                        return false;
                    }
                    else
                    {
                        if(v.back()=='{' && mp['{']>=1)
                        {

                            v.pop_back();
                            mp['{']=mp['{']-1;
                        }
                        else
                        {
                            return false;
                        } 
                    }
                }
                else
                {
                      mp[s[i]]=mp[s[i]]+1;
                      v.push_back(s[i]);
                }
            }
                                   
            if(mp['[']==0 && mp['(']==0 && mp['{']==0)
                                   {
                                       return true;
                                   }
                                   else
                                   {
                                       return false;
                                   }
            
            
             
            
        }
        
       
        
    }
};