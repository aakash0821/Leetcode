class NumMatrix {
public:
    vector<vector<int>> matrix;
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        this->matrix=matrix;
        int n=matrix.size();
        prefix.resize(n);
        for(int i=0;i<n;i++)
        {
            prefix[i].resize(matrix[i].size());
        }
        prefixsum(matrix);
    }
    
    void prefixsum(vector<vector<int>>& matrix)
    {
        for(int i=0;i<matrix.size();i++)
        {
            prefix[i][0]=matrix[i][0];
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                prefix[i][j]=matrix[i][j]+prefix[i][j-1];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++)
        {
            if(col1-1>=0)
            {
                sum=sum+(prefix[i][col2]-prefix[i][col1-1]);
                
            }
            else
            {
                sum+=prefix[i][col2];
            }
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */