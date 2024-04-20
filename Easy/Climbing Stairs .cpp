class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) return n;
        int first = 0,second = 1;
        for(int i = 2; i <= n; i++) {
            int next = first + second;
            first = second;
            second = next;
        }
     return first + second;   
    }
};
