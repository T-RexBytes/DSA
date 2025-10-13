#include<bits/stdc++.h>
class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int s2 = 0;
        int s1 = (nums.size()*(nums.size()+1)/2);
        for(int i=0;i<nums.size();i++){
            s2 = s2 + nums[i];
        }
        return s1-s2;
    }
};