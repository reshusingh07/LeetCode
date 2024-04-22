class Solution {
public:
    char findTheDifference(string s, string t) {
        // int idx1 = 0;
        // int idx2 = 0;
        sort(s.begin(), s.end());
        sort(t.begin(),t.end());
        int i = 0; 
        while( i < s.size()) {
            if(s[i] != t[i]) {
                return t[i];
            }
            i++;
        }
        return t[t.size() - 1];
    }
};
