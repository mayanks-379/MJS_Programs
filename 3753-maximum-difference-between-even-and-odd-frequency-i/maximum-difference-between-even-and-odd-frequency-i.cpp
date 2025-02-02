class Solution {
public:
    int maxDifference(string s) {
        int me=INT_MAX, mo=INT_MIN;
        unordered_map<char, int> mp;
        for(auto c:s){
            mp[c]++;
        }

        for(auto ele:mp){
            int count = ele.second;
            if(count%2){
                mo = max(mo, count);
            }
            else{
                me = min(me, count);
            }
        }

        return (mo == INT_MIN || me == INT_MAX) ? 0 : (mo-me);
    }
};