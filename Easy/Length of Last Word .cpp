class Solution {
public:
    int lengthOfLastWord(string s) {
        int cmt = 0;
        bool alph = false;
        for(int i = s.size() - 1; i >= 0; i--) {
        char ch = s[i];
        if(ch != ' ') {
                cmt++;
                alph = true;
        }
      else if(alph) 
           return cmt; 
        }
          return cmt;
     }
};
