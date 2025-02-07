class Solution {
public:
    string findValidPair(string s) {
        map<char, int> mp;
        string res = "";
        for(auto i:s){
            mp[i-'0']++;
        }

        for(int i=0; i<s.length(); i++){
            int c1 = s[i]-'0';
            int c2 = s[i+1]-'0';

            if(c1 != c2){
                if(mp[c1] == c1 && mp[c2] == c2){
                    return string(1, s[i]) + string(1, s[i+1]);
                }
            }
        }

        return "";
    }
};