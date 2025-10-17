#include<bits/stdc++.h>
using namespace std;

// this is the sum approach

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s2 = 0;
        int s1 = (nums.size()*(nums.size()+1)/2);
        for(int i=0;i<nums.size();i++){
            s2 = s2 + nums[i];
        }
        return s1-s2;
    }
};

// this is the xor approach (two xor at a time)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;
        for(int i = 0; i < nums.size(); i++){
            xor2 ^= nums[i];   
            xor1 ^= i;         
        }
        xor1 ^= nums.size();             
        return xor1 ^ xor2;    
    }
};

// using three xor at a time

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size(); 
        for(int i = 0; i < nums.size(); i++) {
            missing ^= i ^ nums[i]; 
        }
        return missing;
    }
};