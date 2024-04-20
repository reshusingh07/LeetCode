class Solution {
public:
    int addDigits(int num) {
        if( num <= 9)
        return num;
        else
        return Digit(num);
    }
    int Digit(int num)
    {
        if(num <= 9)
        return num;
        int n = 0;
        for(int i = 1; num != 0; i++)
        {
            n += num % 10;
            num /= 10;
        }
        return Digit(n);
    }

};
