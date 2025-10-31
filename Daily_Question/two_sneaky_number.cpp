class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n, 0);
        vector<int> res;
        
        for (int num : nums) {
            freq[num]++;
            if (freq[num] == 2) {
                res.push_back(num);
            }
        }
        return res;
    }
};
