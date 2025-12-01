class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        ans.reserve(nums.size());
        int mod = 0;
        for (int bit : nums) {
            mod = ((mod << 1) + bit) % 5;   // keep only mod 5
            ans.push_back(mod == 0);
        }

        return ans;
    }
};
