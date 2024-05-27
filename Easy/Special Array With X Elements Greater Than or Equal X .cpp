class Solution {
public:
    int n;
    //Use binary search to find number of nums[i]>=x
    inline int f(int x, vector<int>& nums){
        int i=lower_bound(nums.begin(), nums.end(), x)-nums.begin();
        return n-i;
    }
    inline int g(int x, vector<int>& nums){
        return f(x, nums)-x;
    }
    int specialArray(vector<int>& nums) {
        n=nums.size();
        sort(nums.begin(), nums.end());
        int l=0, r=n, m;
        
        // Binary search in the range [0, n]
        while (l <= r) {
            m = (l+r) / 2;
            int gm = g(m, nums);
            if (gm == 0) return m;
            else if (gm > 0) l = m+1;
            else r = m-1;
        }
        return -1;  
    }
};



auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
