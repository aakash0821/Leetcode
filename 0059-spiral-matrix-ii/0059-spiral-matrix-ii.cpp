class Solution {
public:
    void solve(vector<vector<int>>& result, int i, int j, int m, int n, int mfinal, int nfinal, int total)
    {
       
        if(i>(mfinal-2) || j>(nfinal-2))
        {
            return;
        }
        
        int a=i;
        int b=j;
        if(b<n)
        {
            while(b<n)
            {
                //output.push_back(matrix[a][b]);
                result[a][b]=total;
                total++;
                b++;
            }
            b--;
            a++;
            /*cout<<"Traversal from the first loop :"<<endl;
            print(output);*/
        }
        else
        {
            return;
        }
        if(a<m)
        {
        
            while(a<(m))
            {
                //output.push_back(matrix[a][b]);
                result[a][b]=total;
                total++;
                a++;
            }
            a--;
            b--;
            
        }
        else
        {
            return;
        }
            
        if(b>=i)
        {
            
        
            while(b>=i)
            {
                //output.push_back(matrix[a][b]);
                result[a][b]=total;
                total++;
                b--;
            }
            b++;
            a--;
            
        }
        else
        {
            return;
        }
        if(a>i)
        {
            while(a>i)
            {
                //output.push_back(matrix[a][b]);
                result[a][b]=total;
                total++;
                a--;
            }
            
        }
        else
        {
            return;
        }
        solve(result, i+1, j+1, m-1, n-1, mfinal, nfinal, total);
        
        
    }
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result;
        
        if(n==1)
        {
            result.push_back({1});
            return result;
        }
        else if(n==2)
        {
            result.push_back({1,2});
            result.push_back({4,3});
            return result;
        }
        else
        {
            vector<int> vec;
       
        
            for(int i=0;i<n;i++)
            {

                for(int j=0;j<n;j++)
                {
                    vec.push_back(0);
                }
                result.push_back(vec);
                vec.clear();
            }
            solve(result, 0, 0, n, n, n, n, 1);
            return result;
        }
    }
};