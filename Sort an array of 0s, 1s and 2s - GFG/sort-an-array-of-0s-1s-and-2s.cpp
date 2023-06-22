//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    
    void swap(int *a, int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
        return;
    }
    void sort012(int arr[], int n)
    {
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high)
        {
           
            if(arr[mid]==0)
            {
                swap(&arr[low], &arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(&arr[high], &arr[mid]);
                mid;
                high--;
            }
        }
        
        return;
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends