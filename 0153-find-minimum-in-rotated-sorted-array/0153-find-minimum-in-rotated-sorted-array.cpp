class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        
        
        int i=0;
        int j=n-1;
        int last=arr[n-1];
        int mid=i+(j-i)/2;
        
        
        
        if(arr[0]<last || n==1)
        {
            return arr[0];
        }
      while(i<=j)
      {
          if(arr[mid]>arr[mid+1])
          {
              return arr[mid+1];
          }
          else if(arr[mid]<arr[mid+1] && arr[mid]>last)
          {
              i=mid+1;
          }
          else if(arr[mid]<arr[mid+1] && arr[mid]<last)
          {
              j=mid;
          }
          
          mid=i+(j-i)/2;
      }
        return -1;
        
    }
};