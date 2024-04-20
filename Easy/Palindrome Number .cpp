class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
       long int save = x,temp = 0;
        while(x != 0) {
            temp = temp * 10 + x % 10;
             x  /= 10;
        }
        return save == temp;
    }
};
