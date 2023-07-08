class Solution {
public:
    string simplifyPath(string path) {
        string ans="";
        int i=0;
        vector<string> vec;
        while(i<path.length())
        {
            if(path[i]=='/')
            {
                if(!ans.empty())
                {
                    if(ans==".")
                    {
                        ans.clear();
                    }
                    else if(ans=="..")
                    {
                        if(!vec.empty())
                            vec.pop_back();
                        ans.clear();
                    }
                    else
                    {
                        vec.push_back(ans);
                        ans.clear();
                    }
                    
                }
                
            }
            else
            {
                ans+=path[i];
            }
            i++;
        }
        if(!ans.empty())
            if(ans=="..")
            {
                if(!vec.empty())
                    vec.pop_back();
            }
            else if(ans==".")
            {
                i++;
            }
            else
            {
                vec.push_back(ans);
            }
        
        string finals="";
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]=="..")
            {
                continue;
            }
            else
            {
                finals+="/";
                finals+=vec[i];
            }
        }
        
        if(finals.empty()) return "/";
        return finals;
    }
};