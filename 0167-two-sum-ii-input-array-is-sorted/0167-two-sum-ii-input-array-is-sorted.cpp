class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        vector<int> p;
        int sum;
        while(i<j)
        {
            sum=arr[i]+arr[j];
            if(sum==target)
            {
                p.push_back(i+1);
                p.push_back(j+1);
                return p;
            }
            else if(sum<target)
            {
                i++;
            }
            else
            {
                j--;
            }
            
        }
        return p;
        
    }
};