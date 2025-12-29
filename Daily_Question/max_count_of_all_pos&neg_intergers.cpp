class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();

        // Find first index where nums[i] >= 0
        int left = 0, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < 0)
                left = mid + 1;
            else
                right = mid;
        }
        int neg = left;   // number of negatives

        // Find first index where nums[i] > 0
        left = 0, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= 0)
                left = mid + 1;
            else
                right = mid;
        }
        int pos = n - left;  // number of positives

        return max(neg, pos);
    }
};
