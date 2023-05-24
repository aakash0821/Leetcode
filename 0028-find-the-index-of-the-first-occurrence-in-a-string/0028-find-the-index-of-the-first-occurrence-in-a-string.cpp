class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlength=haystack.length();
        int nlength=needle.length();
        if(nlength==0)
        {
            return 0;
        }
        
        else if(hlength<nlength || hlength==0)
        {
            return -1;
        }
        else
        {
            int index;
            for(int i=0;i<(hlength-nlength+1);i++)
            {
                int j=0;
                //bool flag=true
                while(j<nlength)
                {
                    if(needle[j]==haystack[j+i])
                    {
                        index=i;
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(j==nlength)
                {
                    return index;
                }
            }
            return -1;
        }
    }
};