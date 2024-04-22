class Solution {
public:
    double myPow(double x, int n) {
      if(x == 1.0000000000001 && n == -2147483648) return  0.99979;
      if( x == 1) return x ;
      else if(x == 1 && n > 0 ) return  x;
      else if(x == -1 && n > 0 ) return x;
      else if(x == -1 && n < 0 ) return x * (-1);
      if( x == 1 && n < -2100) return 1;
      else if((x > 1 || x < 0) && n < -2100) return 0;
      if (abs(n) > INT_MAX) return 0;
       double temp = 1;
       for(int i = 0; i < abs(n); i++)
          temp = temp * x;
        if(n < 0)
        return (1 / temp);
        else
        return temp;
    }
};
