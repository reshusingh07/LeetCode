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
        // int start = 1; 
        // int end = n;
        // int num = start + (end - start) / 2;
        // for( ; start < end; num = start + (end - start) / 2){
        //     if(guess(num) == 0)
        //     return num;
        //    else if(guess(num) == 1)
        //     start = num + 1;
        //     else
        //     end = num;
        // }
        // return num;
        int Low = 0;
        int High = n;
        while(Low <= High){
            int num = Low + (High - Low) / 2;
            if(guess(num) == 0)
                return num;
            else if(guess(num) == 1)
                 Low = num + 1;
                else
            High = num - 1;

        }
        return -1;
    }
};
