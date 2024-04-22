class Solution {
public:
    bool presentVowl(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            return true;
        else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            return true;
        else 
            return false;
    }

    string reverseVowels(string s1) {
      
      int left = 0;
      int right = s1.size();

        while(left <= right) {
                while(!presentVowl(s1[left]) && left < s1.size()) 
                    left++;
                
                while(!presentVowl(s1[right]) && right > 0) 
                    right--;
                
                if(left <= right)
                    swap(s1[left++], s1[right--]);
        }
        return s1;
    }
};
