//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    
    
    void Solve(vector<vector<int>> a, int r, int c, vector<int>& ans)
    {
        int left=0;
        int right=c-1;
        int top=0;
        int bottom=r-1;
        int count=0;
        int check=r*c;
        
        
        while(left<=right  && top<=bottom)
        {
            if(left<=right && count<check)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(a[top][i]);
                    count++;
                }
                
            }
            top++;
            
            if(top<=bottom && count<check)
            {
                for(int i=top;i<=bottom;i++)
                {
                    ans.push_back(a[i][right]);
                    count++;
                }
                
            }
            right--;
            
            if(left<=right && count<check)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(a[bottom][i]);
                    count++;
                }
                
            }
            bottom--;
            
            if(top<=bottom && count<check)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(a[i][left]);
                    count++;
                }
                
            }
            left++;
            
        }
        return;
    }
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        Solve(matrix, r, c, ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends