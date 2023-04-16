class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows>=s.length() || numRows==1)
        {
            return s;
        }
        else
        {
            map<int, string> mp;
            int i=0;
            int total=1;
            int size=s.length();
            while(i<size)
            {
                while(total<=numRows && i<size)
                {
                    mp[total]=mp[total]+s[i];
                    i++;
                    total++;
                }
                total=total-2;
                while(total>=1 && i<size)
                {
                    mp[total]=mp[total]+s[i];
                    i++;
                    total--;
                }
                total=total+2;
            }
            string finals="";
            
            for(auto it: mp)
            {
                finals=finals+it.second;
            }
            return finals;
        }
    }
};