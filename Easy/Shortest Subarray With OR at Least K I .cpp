class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
int n = nums.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int OR_val = 0;
            for (int j = i; j < n; ++j) {
                OR_val |= nums[j];
                if (OR_val >= k) {
                    ans = std::min(ans, j - i + 1);
                    break; // Found a subarray with OR value >= k, no need to continue the inner loop
                }
            }
        }
        if (ans == INT_MAX) {
            return -1;
        } else {
            return ans;
        }
    }
};
