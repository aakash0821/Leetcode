class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int size=strs.size();
        
       
        sort(strs.begin(), strs.end(), []
        (const string& first, const string& second){
            return first.size() < second.size();
        });
        int min=strs[0].size();
        string result; 
        if(size==1)
        {
            return strs[0];
        }
        else if(min==0)
        {
            return result;
        }
        else
        {
            vector<char> vec;
            char temp;
            bool flag=true;
            for(int i=0;i<min;i++ && flag==true)
            {
                temp=strs[0][i];
                for(int j=1;j<size;j++)
                {
                    if(temp!=strs[j][i])
                    {
                        flag=false;
                        break;
                        
                    }
                }
                if(flag==true)
                {
                    vec.push_back(temp);
                }
            }
            
            int size2=vec.size();
            if(size2==0)
            {
                return result;
            }
            else if(size==1)
            {
                result="vec[0]";
                return result;
            }
            else
            {
                result=vec[0];
                for(int i=1;i<size2;i++)
                {
                    result=result+vec[i];
                }
                return result;
            }
        }
            
    }
};