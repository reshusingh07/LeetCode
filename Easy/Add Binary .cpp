class Solution {
public:
    string addBinary(string a, string b) {
       string ans;
       int rightA = a.length() - 1;
       int rightB = b.length() - 1;
       bool point = false;
       while(rightA >= 0 and rightB >= 0) {
            if((a[rightA] == '0' && b[rightB] == '1') || (a[rightA] == '1' && b[rightB] == '0')) {
                if(point) {
                        ans += '0';
                        point = true;
                }
                else {
                    ans += '1';

                }
            }
        else if(a[rightA] == '1' && b[rightB] == '1') {
                if(point) {
                    ans += '1';
                }
                else {
                    ans += '0';
                    point = true;
                }
            }
        else if(a[rightA] == '0' && b[rightB] == '0') {
                if(point) {
                    ans += '1';
                    point = false;
                }
                else {
                    ans += '0';
                }
        }
        rightA--; rightB--;
       }
       while(rightA >= 0) {
            if(point && a[rightA] == '1') {
                    ans += '0';
            }
            else if(point && a[rightA] == '0'){
                    ans += '1';
                    point = false;
            }
            else {
                ans += a[rightA];
            }
            rightA--;
       }
       while(rightB >= 0) {
            if(point && b[rightB] == '1') {
                ans += '0';
            }
            else if(point && b[rightB] == '0') {
                ans += '1';
                point = false;
            }
            else {
                ans += b[rightB];
            }
            rightB--;
       }
       if(point) ans += '1';
    
       reverse(ans.begin(), ans.end());
       cout << ans;
       return ans; 
    }
};
