class Solution {
public:
    
   bool BinarySearch(vector<int>& vec, int size, int target)
   {
       int i=0;
       int j=size-1;
       int mid=i+(j-i)/2;
       while(i<=j)
       {
           if(vec[mid]==target)
           {
               return true;
           }
           else if(vec[mid]>target)
           {
               j=mid-1;
           }
           else
           {
               i=mid+1;
           }
           mid=i+(j-i)/2;
       }
       return false;
   }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            if(BinarySearch(matrix[i], n, target))
            {
                return true;
            }
        }
        return false;
        
        
    }
};