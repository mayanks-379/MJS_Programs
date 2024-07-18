class Solution {
public:
    int numberOfSpecialChars(string word) {
        bitset<26> small={}, cap={};
        
        for(auto c:word){
            if(islower(c))
                small[c-'a'] = !(cap[c-'a']);
            else
                cap[c-'A'] = true;
        }
        
        return (small&cap).count();
    }
};