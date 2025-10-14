class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(int val : nums)
        {
            xorr ^=  val;
        }
        return xorr;
    }
};