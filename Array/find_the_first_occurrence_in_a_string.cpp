class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0; // edge case: empty needle
        if(haystack.size() < needle.size()) return -1; // needle longer than haystack
        for(int i = 0; i <= haystack.size() - needle.size(); i++) {
            int j = 0;
            while(j < needle.size() && haystack[i + j] == needle[j]) {
                j++;
            }
            if(j == needle.size()) return i; // found the first occurrence
        }
        return -1; // not found
    }
};
