class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int left = 0, right = nums.size() - 1, pos = nums.size() - 1;
        //this needs to be updated
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                res[pos--] = nums[left] * nums[left];
                left++;
            } else {
                res[pos--] = nums[right] * nums[right];
                right--;
            }
        }
        return res;
    }
};
