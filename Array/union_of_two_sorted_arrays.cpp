#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;
        vector<int> unionArray;
        
        while(i < n1 && j < n2) {
            if(nums1[i] < nums2[j]) {
                if(unionArray.empty() || unionArray.back() != nums1[i])
                    unionArray.push_back(nums1[i]);
                i++;
            } else if(nums1[i] > nums2[j]) {
                if(unionArray.empty() || unionArray.back() != nums2[j])
                    unionArray.push_back(nums2[j]);
                j++;
            } else { // nums1[i] == nums2[j]
                if(unionArray.empty() || unionArray.back() != nums1[i])
                    unionArray.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        while(i < n1) {
            if(unionArray.empty() || unionArray.back() != nums1[i])
                unionArray.push_back(nums1[i]);
            i++;
        }

        while(j < n2) {
            if(unionArray.empty() || unionArray.back() != nums2[j])
                unionArray.push_back(nums2[j]);
            j++;
        }

        return unionArray;
    }
};
