class Solution {
public:
    int smallestNumber(int n) {
    int bits=floor(log2(n))+1;  //this gives the closest bit length of set bit  
        int ans=1<<bits;    // this is the same as (2^bits)-1
        return ans-1;  
    }
};
