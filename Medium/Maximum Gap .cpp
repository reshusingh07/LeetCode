class Solution {
public:
    int maximumGap(vector<int>& nums) {
        long long n = nums.size(); //To prevent integer overflow during index calculation
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());

        if(maxi == mini){
            return 0;
        }

        vector<int> bucketLargest(n,INT_MIN);
        vector<int> bucketSmallest(n,INT_MAX);

        for(int i=0;i<n;i++){
            int index = (((nums[i] - mini)*(n-1))/(maxi - mini));
            bucketLargest[index] = max(bucketLargest[index],nums[i]);
            bucketSmallest[index] = min(bucketSmallest[index],nums[i]);
        }

        int lG = 0;
        int i = 0, j = 1;
        while(j<n){
            if(bucketLargest[j] == INT_MIN){
                j++;
            }
            else if(bucketLargest[i] == INT_MIN){
                i++;
            }
            else{
                lG = max(lG,bucketSmallest[j] - bucketLargest[i]);
                i++,j++;
            }
        }

        return lG;
    }
};
