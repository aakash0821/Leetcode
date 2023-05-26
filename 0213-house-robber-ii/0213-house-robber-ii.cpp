class Solution {
public:
    int solve(vector<int> &arr){
        //using tabulation(top-down) approach with space optimisation

        int n = arr.size();
        int prev1 = arr[0];
        int prev2 = 0;

        for(int i = 1; i < n; i++){
            int take = arr[i];
            
            if(i > 1)
                take += prev2;

            int notTake = 0 + prev1;
            int curr = max(take,notTake);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        long long int n = nums.size();
        if(n == 1)
            return nums[0];

        //contain all the houses except the first one
        vector<int> temp1;

        //contain all the houses except the last one
        vector<int> temp2;

        for(int i = 0; i < n; i++){
            if(i != 0)
                temp1.push_back(nums[i]);

            if(i != n-1)
                temp2.push_back(nums[i]);
        }
        return max( solve(temp1) , solve(temp2) );
    }
};