// Brute Force....

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {

      // Brute Force....
        int n = nums.size();
        int count = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                count++;
            } else {
                count = 1;
            }
            if(count > 2) {
                return false;
            }
        }
        return true;
          
        unordered_map<int, int> mp;
        for(auto i : nums) {
            mp[i]++;
            if(mp[i] > 2) return false;
        }
        
        return true;
    }
};


// Optimal Solution by using MAP....
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {

        unordered_map<int, int> mp;
        for(auto i : nums) {
            mp[i]++;
        }
      for(auto i : mp) {
          if(i.second > 2) {
            return false; 
          }
      }
        
        return true;
    }
};

// More Optimal Solution By using MAP...
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
 
        unordered_map<uint8_t, uint8_t> mp;  // int8_t: Signed 8-bit integer Range: -128 to 127.
        for(auto i : nums) {
            mp[i]++;
            if(mp[i] > 2) return false;
        }
        
        return true;
    }
};
