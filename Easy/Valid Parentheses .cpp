class Solution {
public:
    bool isValid(string s) {
          int n=s.size();
    stack<char> st;
    bool ans = true;
    for(int i=0; i<n; i++){
        if(s[i] =='{' or s[i]=='(' or s[i]=='['){
            cout << endl << "work 1";
            st.push(s[i]);
        }
        else if(st.empty() == 1 && (s[i]==')' || s[i] == '}' || s[i] == ']')){
            ans = false;
                        cout << endl << "work 2";
            return ans;
        }
        else if(st.top() == '(' and s[i] == ')') {
            cout << endl << "work 3";
            st.pop();
        }
        else if(st.top() == '{' and s[i] == '}') {
            cout << endl << "work 4";
            st.pop();
        }
        else if(st.top() == '[' and s[i] == ']') {
            cout << endl << "work 5";
            st.pop();
        }
        else  {
            cout << endl << "work 6";
            ans = false;
            return ans;
        }
    }
    cout << endl << "work 7 = " << ans;
    if(st.empty() == 0) {
        ans = false;
        return ans;
    }
    return ans;
}
};
