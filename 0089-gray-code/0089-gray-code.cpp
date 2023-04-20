class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        int j=1;
        j=j<<1;
        for(int i=1;i<n;i++)
        {
            cout<<j<<endl;
            vector<int> output;
            for(int k=ans.size()-1;k>=0;k--)
            {
                output.push_back(ans[k]|j);
            }
            
            for(auto it: output)
            {
                ans.push_back(it);
            }
            j=j<<1;
        }
        return ans;
        
    }
};