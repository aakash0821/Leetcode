class Solution {
public:

        
    string frequencySort(string s) {
        map<char, int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            
        }
        
        map<int, vector<char>> mpp;
        map<int,bool> mppp;
        priority_queue<int> pq;
        
        for(auto it: mp)
        {
            if(!mppp[it.second])
            {
                pq.push(it.second);
                mppp[it.second]=true;
            }
            mpp[it.second].push_back(it.first);
        }
        
        string finals="";
        while(!pq.empty())
        {
            int top=pq.top();
            pq.pop();
            int size=mpp[top].size();
            sort(mpp[top].begin(), mpp[top].end());
            for(int i=0;i<size;i++)
            {
                string test(top, mpp[top][i]);
                finals.append(test);
            }
        }
        return finals;
       
    }
};