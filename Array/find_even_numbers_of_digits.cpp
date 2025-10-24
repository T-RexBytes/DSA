class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int n : nums) {
            int digits = (n == 0) ? 1 : (int)log10(abs(n)) + 1;
            if (digits % 2 == 0) count++;
        }
        return count;
    }
};
