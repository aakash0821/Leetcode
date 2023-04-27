class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        
        while(pq.size()>1)
        {
            int lar=pq.top();
            pq.pop();
            int sl=pq.top();
            pq.pop();
            
            if(lar>sl)
            {
                pq.push(lar-sl);
            }
            
        }
        
        if(pq.empty())
        {
            return 0;
        }
        return (pq.top());
    }
};