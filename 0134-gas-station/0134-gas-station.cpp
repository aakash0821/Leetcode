class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //int index=0;
        int n=gas.size();
        
//         for(int i=0;i<n;i++)
//         {
//             index=i;
           
//             int count=0;
//             int gasleft=0;
//             bool flag=true;
//             if(gas[index]>=cost[index])
//             {
                
            
//                 while(count<=n)
//                 {
//                     gasleft+=gas[index%n];
//                     if(gasleft-cost[index%n]>=0)
//                     {
//                         gasleft-=cost[index%n];
//                         count++;
//                         index++;
//                     }
//                     else
//                     {
//                         flag=false;
//                         break;
//                     }
//                 } 
//                 if(flag)
//                 {
//                     return i;
//                 }
//             }
//         }
        
        
        int index=0;
        int count=0;
        int gasleft=0;
        int tl=0;
        int tc=0;
        for(int i=0;i<n;i++)
        {
            tl+=gas[i];
            tc+=cost[i];
        }
        
        if(tl<tc)
        {
            return -1;
        }
        
        int total=0;
        
        for(int i=0;i<n;i++)
        {
            gasleft+=(gas[i]-cost[i]);
            total+=gas[i]-cost[i];
            if(gasleft<0)
            {
                gasleft=0;
                index=i+1;
            }
        }
        
        
        
        
        return index;
        
        
        
    }
};