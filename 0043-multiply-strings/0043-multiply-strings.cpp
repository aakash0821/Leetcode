class Solution {
public:
    
    vector<int> solve(string nums1, string nums2)
    {
        map<int,vector<int>> mp;
        int total=0;
        int carry=0;
        for(int i=nums2.length()-1;i>=0;i--)
        {
            if(nums2[i]=='0')
            {
                mp[total+1].push_back(0);
                total++;
            }
            else
            {
                
            
           
                for(int j=0;j<total;j++)
                {
                    mp[total+1].push_back(0);
                }

                for(int k=nums1.length()-1;k>=0;k--)
                {
                    int test=carry+(((int)nums1[k]-'0')*((int)nums2[i]-'0'));
                    carry=test/10;
                    test=test%10;
                    mp[total+1].push_back(test);

                }

                if(carry!=0)
                {
                    mp[total+1].push_back(carry);
                    carry=0;
                }
                reverse(mp[total+1].begin(), mp[total+1].end());
                total++;
            }
        }
        carry=0;
        if(mp.size()>1)
        {
            
        
        
        
            bool flag=true;
            vector<int> result;
            vector<int> finals;
            for(int i=1;i<mp.size();i++)
            {
                int check;
                if(flag)
                {
                    int p=mp[i].size()-1;
                    int q=mp[i+1].size()-1;
                    
                    while(p>=0 && q>=0)
                    {
                        check=mp[i][p]+mp[i+1][q]+carry;
                        
                        carry=check/10;
                        check=check%10;
                        result.push_back(check);
                        p--;
                        q--;
                    }
                    
                    while(p>=0)
                    {
                        check=carry+mp[i][p];
                        carry=check/10;
                        check=check%10;
                        result.push_back(check);
                        p--;
                    }
                    while(q>=0)
                    {
                        check=carry+mp[i+1][q];
                        carry=check/10;
                        check=check%10;
                        result.push_back(check);
                        q--;
                    }
                    
                    if(carry!=0)
                    {
                        result.push_back(carry);
                        carry=0;
                    }
                    reverse(result.begin(), result.end());
                    flag=false;
                }
                else
                {
                    carry=0;
                    int r=mp[i+1].size()-1;
                    int s=result.size()-1;
                    while(r>=0 && s>=0)
                    {
                        check=mp[i+1][r]+result[s]+carry;
                        
                        carry=check/10;
                        check=check%10;
                        finals.push_back(check);
                        r--;
                        s--;
                    }
                    
                    while(r>=0)
                    {
                        check=carry+mp[i+1][r];
                        carry=check/10;
                        check=check%10;
                        finals.push_back(check);
                        r--;
                    }
                    while(s>=0)
                    {
                        check=carry+result[s];
                        carry=check/10;
                        check=check%10;
                        finals.push_back(check);
                        s--;
                    }
                    
                    if(carry!=0)
                    {
                        finals.push_back(carry);
                        carry=0;
                    }
                    reverse(finals.begin(), finals.end());
                    result.clear();
                    for(int i=0;i<finals.size();i++)
                    {
                        result.push_back(finals[i]);
                    }
                    finals.clear();
                    
                }
            }
            return result;
        }
        else
        {
            return mp[1];
        }
        
        
    }
    string multiply(string num1, string num2) {
        string name="";
        vector<int> test=solve(num1, num2);
        bool flag=true;
        for(int j=0;j<test.size();j++)
        {
            if(test[j]!=0)
            {
                flag=false;
                break;
                
            }
        }
        if(flag)
        {
            return "0";
        }
        else
        {
            for(int i=0;i<test.size();i++)
            {

                name.push_back(test[i]+'0');
            }
            return name;
        }
    }
};