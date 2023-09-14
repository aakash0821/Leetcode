/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if(guess(n)==0) return n;
        int low=1;
        int high=n;
        int mid=low+(high-low)/2;
        while(low<=high)
        {
            int check=guess(mid);
            if(check==0)
            {
                return mid;
            }
            else if(check==-1)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
            mid=low+(high-low)/2;
        }
        return -1;
        
    }
};