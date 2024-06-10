class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp = heights;
        sort(temp.begin(), temp.end());
        int cmt = 0, i = 0;
        while(i < heights.size()) {
          cmt += (temp[i] != heights[i]);
          i++;
        }
        return cmt;
    }
};
