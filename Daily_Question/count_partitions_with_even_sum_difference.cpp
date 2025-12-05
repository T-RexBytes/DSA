class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;

        long long leftSum = 0;
        int n = nums.size();
        int count = 0;

      
        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
            long long rightSum = total - leftSum;

            
            if ((leftSum % 2 + 2) % 2 == (rightSum % 2 + 2) % 2) {
                count++;
            }
        }

        return count;
    }
};
