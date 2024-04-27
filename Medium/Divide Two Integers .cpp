class Solution {
public:
    int divide(int dividend, int divisor) {
    if(dividend == divisor) 
       return 1;
    bool sign = true;
    if(dividend > 0 && divisor < 0) sign = false;
    else if(dividend < 0 && divisor > 0) sign = false;

    long n = abs(dividend);
    long d = abs(divisor);
    divisor = abs(divisor);

    long qu = 0;
    while(n >= d) {
        int cnt = 0;
        while(n >= (d << cnt + 1)) {
            cnt++;
        }
        qu += 1 << cnt;
        n -= (d << cnt);
    }
    if(qu == (1 << 31)) {
        if(sign) {
            return INT_MAX;
        }
        else {
            return INT_MIN;
        }
    }
    return sign ? qu : -qu;


    }
};
