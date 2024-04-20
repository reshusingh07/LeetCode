class Solution {
public:
    bool isHappy(int n) {
        if( n == 1)
            return true;

      else if(n > 1 &&  n < 10)
      {
          if(n == 7)
          return true;

        return false;
      }
            int sum = 0;
            for(int i = 1; n != 0; i++)
            {
                int add = n % 10;
                sum += add  * add;
                n /= 10;
            }
            return isHappy(sum);
    }
  

};
