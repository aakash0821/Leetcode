class Solution {
public:
    string reverseWords(string s) {
//         bool check=false;
//         if(s[0]==" ")
//         {
//             check=true;
//         }
//         vector<string> vec;
        
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]==" " && check)
//         }
        
        stringstream str(s);
        vector<string> vec;
        string word;
        while(str>>word)
        {
            vec.push_back(word);
        }
        
        string test="";
        for(int i=vec.size()-1;i>0;i--)
        {
            test+=vec[i]+" ";
        }
        test+=vec[0];
        return test;
    }
};