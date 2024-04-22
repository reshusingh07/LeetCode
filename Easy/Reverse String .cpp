class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;

        while(start < end)
        {
            swap(s.at(start), s.at(end));
            start++;
            end--;
        }

    }
};
