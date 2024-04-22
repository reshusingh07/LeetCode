class Solution {
public:
    bool isUgly(int n) {
        if(n == 1)
        return true;
        if(n == 0)
        return false;

        return  Check(n);
    }
    int Check(int n)
    {
        if(n == 1)
        return true;

        if(n % 2 == 0)
        {
            return Check(n/2);
        }
        if(n % 3 == 0)
        {
            return Check(n/3);
        }
        if(n % 5 == 0)
        {
            return Check(n/5);
        }
        return false;
    }
};
