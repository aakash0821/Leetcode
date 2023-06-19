class Solution {
public:
    int calculate(string s) {
        int sum=0;
        int sign=+1;
        int n=s.length();
        
        stack<int> st;
        
        
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            
            if(isdigit(ch))
            {
                int val=0;
                while(i<n && isdigit(s[i]))
                {
                    val=val*10+(s[i]-'0');
                    i++;
                }
                
                val=val*sign;
                sum+=val;
                sign=1;
                i--;
            }
            else if(ch=='(')
            {
                st.push(sum);
                st.push(sign);
                sum=0;
                sign=1;
            }
            else if(ch==')')
            {
                sum=sum*st.top();
                st.pop();
                sum+=st.top();
                st.pop();
            }
            else if(ch=='-')
            {
                sign*=-1;
            }
        }
         return sum;
        
            
    }
       
};