 class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0, i = 0;
        while(i < arr.size()) {
            if(arr[i] % 2 != 0) {
                count++;
            } else {
                count = 0;
            }
            if(count == 3) 
                return true;
            i++;
        }
        return false;
    }
};
