class Solution {
public:
    int integerBreak(int n) {
        if(n == 2) return 1;
        if(n == 3) return 2;
        int x = n / 3;
        
        if(n % 3 == 1) 
            return 4 * pow(3, x - 1);

        else if(n % 3 == 0) 
            return pow(3, x); 

        else 
         return n % 3 * pow(3, x);
    }
};
