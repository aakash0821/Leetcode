class Solution {
public:
    int calculate(string str) {
                    
      int n=str.length();
      char sign='+';
        stack<int> st;
        
        for(int i=0;i<n;i++)
        {
            char ch=str[i];
            if(isdigit(ch))
            {
                int val=0;
                while(i<n && isdigit(str[i]))
                {
                    val=val*10+(str[i]-'0');
                    i++;
                }
                
                i--;
                if(sign=='+')
                {
                    st.push(val);
                  
                }
                else if(sign=='-')
                {
                    st.push(-val);
                    
                }
                else if(sign=='*')
                {
                    int a=st.top();
                    st.pop();
                    int ans=a*val;
                    st.push(ans);
                }
                else if(sign=='/')
                {
                    int a=st.top();
                    st.pop();
                    int ans=a/val;
                    st.push(ans);
                }
                
                
               
            }
            else if(ch!=' ')
            {
                sign=ch;
            }
            
        }
        
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};