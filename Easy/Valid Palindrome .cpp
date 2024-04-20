class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if(ch >= 'a' && ch <= 'z')
                s1 += s[i];
            else if(ch >= 'A' && ch <= 'Z')
                s1 += ch + 32;
            else if(ch >= '0' && ch <= '9')
                s1 += ch;
        }
        int left = 0, right = s1.size() - 1;
        while(left <= right) {
            if(s1[left] != s1[right]) 
                return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};
