class Solution {
public:
    int vowelConsonantScore(string s) {
        int vowel = 0;
        int consonant = 0;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            if(ch >= 'a' && ch <= 'z'){
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                    vowel += 1;
                }
                else{
                    consonant += 1;
                }
            }
        }
        if(consonant == 0){
            return 0;
        }
        return floor(vowel / consonant);
    }
};
