class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // if i take gas - cost
        // -2, -2, -2, 3, 3
        // 0
        // prefix sum: -2, -4, -6, -3, 0
        // 1
        // prefix sum:  0, -2, -4, -1, 2
        // 2
        // prefix sum:  2, 0, -2, 1, 4
        // 3
        // prefix sum:  4, 2, 0, 3, 6


        // -1, 3, -4, 2
        // 0
        // prefix sum: -1, 2, -2, 0
        // 1
        // prefix sum: 0, 3, -1, 1
        // 2
        // prefix sum: -3, 0, -4, -2
        // 3
        // prefix sum: 1, 4, 0, 2
        // ans: 3

        // get prefix sum and it shd reach >= 0

        // find the most negative value and that idx + 1 is the starting
        int res = -1, min_val = 0;
        for (int i = 0; i < cost.size(); i++) {
            gas[i] -= cost[i];
            if (i > 0) gas[i] += gas[i - 1];
            if (gas[i] < min_val) {
                min_val = gas[i];
                res = i;
            }
        }
        if (gas.back() < 0) return -1;
        return res + 1;
        // invariant, maintain a net positive when travelling clockwise
    }
};
