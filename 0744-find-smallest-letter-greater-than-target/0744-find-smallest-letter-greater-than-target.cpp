class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int test=(int)target;
        for(int i=0;i<letters.size();i++)
        {
            int test2=(int)letters[i];
            if(test2>test)
            {
                return letters[i];
            }
        }
        return letters[0];
    }
};