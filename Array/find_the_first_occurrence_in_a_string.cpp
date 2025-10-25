class Solution {
public:
    int strStr(string haystack, string needle) {
        int count=0;
        for(int i=0;i<haystack.size();i++){
           if(haystack[i]==needle[i]){
                for(int j=1;i<needle.size();j++){
                    while(if(needle[j]==haystack[j])){
                        count++;
                    }
                }
           }
        }
    }
};
