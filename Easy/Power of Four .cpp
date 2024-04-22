class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i = 1; n != 0; i++)
        {
            if(n == 1)
                return true;
            if(n % 4 == 0)
                n /= 4;
                else 
                return false;
                
        }
        return false;
    }
};
