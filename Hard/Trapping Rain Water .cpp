class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, leftMax = height[0], sum = 0;
        int j = height.size() - 1, rightMax = height[j];
 
        while (i < j) {

            if (leftMax <= rightMax) {
                sum += (leftMax - height[i]);
                i++;
                leftMax = max(leftMax, height[i]);
            } else {
                sum += (rightMax - height[j]);
                j--;
                rightMax = max(rightMax, height[j]);
            }
        }
        return sum;
    }
};
