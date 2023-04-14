class Solution {
public:
    
   
    
    void swap(int *a, int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
        return;
    }
    void solve(vector<vector<int>> & matrix, int i, int j, int length)
    {
        if(j>i)
        {
            return;
        }
        
        for(int k=i;k>=j;k--)
        {
            swap(&(matrix[i][k]), &(matrix[length-k][i]));
            swap(&(matrix[length-k][i]), &(matrix[length-i][length-k]));
            swap(&(matrix[length-i][length-k]), &(matrix[k][length-i]));
        }
        solve(matrix, i-1, j+1, length);
        
    }
    void rotate(vector<vector<int>>& matrix) {
        int i=matrix.size()-1;
        int length=i;
        int j=1;
        int sizes=matrix.size();
        if(sizes==1)
        {
            return;
        }
        else if(sizes==2)
        {
            swap(&(matrix[1][1]), &(matrix[0][1]));
            swap(&(matrix[0][1]), &(matrix[0][0]));
            swap(&(matrix[0][0]), &(matrix[1][0]));
            return;
        }
        else
        {
        
            solve(matrix, i, j, length);
            return;
        }
        
    }
};