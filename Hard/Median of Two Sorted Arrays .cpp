class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
            int idx1 = 0; 
            int idx2 = 0;
            while(idx1 < nums1.size() && idx2 < nums2.size()) {

                if(nums1[idx1] < nums2[idx2]) 
                    temp.push_back(nums1[idx1++]);
                else
                    temp.push_back(nums2[idx2++]);
            }
            
            while(idx1 < nums1.size())
                temp.push_back(nums1[idx1++]);

            while(idx2 < nums2.size())
                temp.push_back(nums2[idx2++]);

                idx2 = temp.size();
            if(temp.size() % 2 != 0)
            return temp[idx2 / 2];
            else {
            double second =  temp[idx2 / 2 - 1];
            return (temp[idx2 / 2] + second) /2 ;
            }

            return 0;
    }
};
