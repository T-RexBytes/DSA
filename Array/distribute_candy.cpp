class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       unordered_set<int> st;
       for(int i : candyType){
        if(st.size() ==  candyType.size()/2) return  candyType.size()/2;
        st.insert(i);
       }
       return st.size();
    }
};
