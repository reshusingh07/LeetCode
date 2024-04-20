class Solution {
public:
    int singleNumber(vector<int>& nums) {
           int n;
//declare because it store the xor of element of the array 
        int ans=0;
//Size of the array
        n=nums.size();
        for(int i=0;i<n;i++){
//XOR if the element of the array
          ans^=nums[i];
        }
        return ans;
    }
};
