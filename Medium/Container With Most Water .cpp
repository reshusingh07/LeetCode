class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int big = 0;
         while(left < right) {
            int temp =  min(height[left], height[right]) *(right - left);

            if(big < temp ) {
                big = temp;
            }

            if(height[left] < height[right]) {
                left++;
            }
            else 
                right--;
         }
         return big;
    }
};
