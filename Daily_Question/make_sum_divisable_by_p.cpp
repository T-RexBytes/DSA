class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total = 0;
        for (int x : nums) total += x;
        
        int target = total % p;
        if (target == 0) return 0;

        unordered_map<int,int> mp;
        mp[0] = -1;

        long long pref = 0;
        int ans = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            pref = (pref + nums[i]) % p;

            int need = (pref - target + p) % p;

            if (mp.count(need)) {
                ans = min(ans, i - mp[need]);
            }

            mp[pref] = i;   // MUST store latest index
        }

        return ans == nums.size() ? -1 : ans;
    }
};
