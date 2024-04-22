class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int count = 0;
        for(int i = 1; i < 50; i++)
        {
          if(n == 1)
          return true;
          if(n % 3 == 0)
              n /= 3;
          

        }
        return false;
    }
};
