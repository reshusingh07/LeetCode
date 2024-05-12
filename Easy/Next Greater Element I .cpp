class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();

        vector<int> ans(m, -1);
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(nums1[i] == nums2[j]) {
                    for(int k = j + 1; k < n; k++) {
                        if(nums1[i] < nums2[k]){
                            ans[i] = nums2[k];
                            break;
                        }
                    }     
                }
            }
        }
        return ans;
    }
};
