#include<bits/stdc++.h>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[k]){
                nums[k+1]=nums[j];
                k++;
            }
        }
        return k+1;
    }
};