auto init =[]() {
    ios::sync_with_stdio(0);  //this code initializes a lambda function that sets certain stream flags to improve I/O performance, 
                             // and it executes this initialization immediately upon program startup. The return value of the
                             // lambda function is not used.
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

class Solution {
public:
    string sortVowels(string s) {
        string vowel = "AEIOUaeiou", t = "";

        for(auto ch : s) {
            if(vowel.find(ch) != -1) 
                  t += ch;
        }
        
        sort(t.begin(), t.end());
        int j = 0;
        for(int i = 0; j < t.length(); i++) {
            if(vowel.find(s[i]) != -1) {
                s[i] = t[j++];
            }     
        }
        return s;
    }
};
