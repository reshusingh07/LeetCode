class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        int M = nums1.size(), N = nums2.size();
        int idx1 = 0, idx2 = 0;

        while(idx1 < M && idx2 < N) {
            while(idx1 < M - 1 && nums1[idx1] == nums1[idx1+ 1])
                idx1++;
            while(idx2 < N - 1 && nums2[idx2] == nums2[idx2 + 1])
                idx2++;
            if(nums1[idx1] == nums2[idx2]) {
                ans.push_back(nums1[idx1]);
                idx1++; idx2++;
            }
            else if(nums1[idx1] > nums2[idx2]) 
                idx2++;
              else idx1++;
        }
        return ans;
    }
};
