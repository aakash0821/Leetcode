//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            vec.push_back(arr[i]);
        }
        
        map<int, int> mp;
        //map<int, bool> mpp;
        for(int i=0;i<n;i++)
        {
            mp[vec[i]]=mp[vec[i]]+1;
            //mpp[vec[i]]=true;
        }
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            mp[vec[i]]--;
            if(k-vec[i]>=1)
            {
                
            
                int check=k-vec[i];
                if(mp[check]>0)
                {
                    count+=mp[check];
                    
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends