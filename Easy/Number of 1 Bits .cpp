class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter=0;
        while(n){
            counter+=1;
            n=n&(n-1);
        }
        return counter;
    }
};
