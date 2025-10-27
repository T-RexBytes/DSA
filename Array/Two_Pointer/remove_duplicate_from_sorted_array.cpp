class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> dist;
        for (int i = 0; i < nums.size(); i++) {
            if (dist.count(nums[i]) && abs(i - dist[nums[i]]) <= k)
                return true;
            dist[nums[i]] = i;
        }
        return false;
    }
};
