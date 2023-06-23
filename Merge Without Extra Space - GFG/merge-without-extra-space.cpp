//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        
        void swap(long long  *a, long long  *b)
        {
            long long  temp=*a;
            *a=*b;
            *b=temp;
            return;
        }
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            vector<long long> vec1;
            vector<long long> vec2;
            
            for(int i=0;i<n;i++)
            {
                vec1.push_back(arr1[i]);
            }
            
            for(int i=0;i<m;i++)
            {
                vec2.push_back(arr2[i]);
            }
            
            
            int low=n-1;
            int high=0;
            
            while(low>=0 && high<m)
            {
                if(vec1[low]>vec2[high])
                {
                    swap(&vec1[low], &vec2[high]);
                    low--;
                    high++;
                    //sort(vec2.begin(), vec2.end());
                }
                else
                {
                    break;
                }
            }
            
            sort(vec1.begin(), vec1.end());
             sort(vec2.begin(), vec2.end());
            for(int i=0;i<n;i++)
            {
                arr1[i]=vec1[i];
            }
            for(int j=0;j<m;j++)
            {
                            arr2[j]=vec2[j];
            }
            
            
            return;
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends